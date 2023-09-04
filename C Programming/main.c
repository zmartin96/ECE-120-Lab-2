#include <stdio.h>
#include <math.h>
//
//int main(int argc, const char * argv[]) {
//	printf("10/2/3=%d\n",10/2/3);
//	printf("10./2/3=%f\n\n",10./2/3);
//	return 0;
//}
int main(void)
{
	FILE *inFile;
	inFile=fopen("/Users/zacharymartin/Documents/XCode Projects/C Programming/C Programming/lab2.txt","w");
	int num1[5]={-22,12,10, 12, -11};
	int num2[5]={33,3,3,3,3};
	int resInt[5];
	unsigned int resUnsigned[5];
	float resFloat[5];
	double resDouble[5];
	char operator;
	char type[4][14]={"int:","unsigned int:","float:","double:"};
	
	for (int i=0;i<5;i++)
	{
		if (i==0)
		{
			operator='*';
			resInt[i]=num1[i]*num2[i];
			resUnsigned[i]=num1[i]*num2[i];
			resFloat[i]=(float)num1[i]*num2[i];
			resDouble[i]=(double)num1[i]*num2[i];
		}
		else if (i<3)
		{
			operator='/';
			resInt[i]=num1[i]/num2[i];
			resUnsigned[i]=num1[i]/num2[i];
			resFloat[i]=(float)num1[i]/num2[i];
			resDouble[i]=(double)num1[i]/num2[i];
		}
		else
		{
			operator='%';
			resInt[i]=num1[i]%num2[i];
			resUnsigned[i]=num1[i]%num2[i];
			resFloat[i]=fmod((float)num1[i],num2[i]);
			resDouble[i]=fmod((double)num1[i],num2[i]);
		}
		fprintf(inFile,"\n%d.\n",i+1);
		fprintf(inFile,"%-15s%d %c %d = %d\n", type[0],num1[i],operator,num2[i],resInt[i]);
		fprintf(inFile,"%-15s%d %c %d = %u\n", type[1],num1[i],operator,num2[i],resUnsigned[i]);
		fprintf(inFile,"%-15s%d %c %d = %f\n", type[2],num1[i],operator,num2[i],resFloat[i]);
		fprintf(inFile,"%-15s%d %c %d = %lf\n", type[3],num1[i],operator,num2[i],resDouble[i]);
	}
}
