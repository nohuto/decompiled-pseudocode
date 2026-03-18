/*
 * XREFs of ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x180292BE4
 * Callers:
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18010AE9C (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

float *__fastcall D2DMatrix::operator*(float *a1, float *a2, float a3)
{
  float *v3; // rax
  float v4; // xmm0_4
  __int64 v5; // r8
  signed __int64 v6; // rcx

  v3 = a2 + 1;
  v4 = a3 * *a1;
  v5 = 15LL;
  v6 = (char *)a1 - (char *)a2;
  *a2 = v4;
  do
  {
    *v3 = a3 * *(float *)((char *)v3 + v6);
    ++v3;
    --v5;
  }
  while ( v5 );
  return a2;
}
