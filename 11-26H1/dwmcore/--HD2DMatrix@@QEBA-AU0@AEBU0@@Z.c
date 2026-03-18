/*
 * XREFs of ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180292CA8
 * Callers:
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801AC138 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18026B8E0 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 * Callees:
 *     <none>
 */

float *__fastcall D2DMatrix::operator+(float *a1, float *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm0_4
  signed __int64 v5; // rcx
  signed __int64 v6; // r9
  __int64 v7; // r8

  v3 = a3 + 1;
  v4 = *a3 + *a1;
  v5 = (char *)a1 - (char *)a3;
  v6 = (char *)a2 - (char *)a3;
  v7 = 15LL;
  *a2 = v4;
  do
  {
    *(float *)((char *)v3 + v6) = *(float *)((char *)v3 + v5) + *v3;
    ++v3;
    --v7;
  }
  while ( v7 );
  return a2;
}
