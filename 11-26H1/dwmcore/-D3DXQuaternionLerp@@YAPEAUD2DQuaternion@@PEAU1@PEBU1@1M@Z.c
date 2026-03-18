/*
 * XREFs of ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x1801AC768
 * Callers:
 *     ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x180212404 (-QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionLerp(
        struct D2DQuaternion *a1,
        const struct D2DQuaternion *a2,
        const struct D2DQuaternion *a3,
        float a4)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  float v8; // xmm4_4
  float v9; // xmm6_4
  __int64 i; // rax

  v5 = a2 - a3;
  v6 = a1 - a3;
  v7 = 4LL;
  v8 = 1.0 - a4;
  if ( (float)((float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 1)) + (float)(*(float *)a2 * *(float *)a3))
                     + (float)(*((float *)a2 + 2) * *((float *)a3 + 2)))
             + (float)(*((float *)a2 + 3) * *((float *)a3 + 3))) < 0.0 )
  {
    do
    {
      *(float *)((char *)a3 + v6) = (float)(v8 * *(float *)((char *)a3 + v5)) - (float)(a4 * *(float *)a3);
      a3 = (const struct D2DQuaternion *)((char *)a3 + 4);
      --v7;
    }
    while ( v7 );
  }
  else
  {
    do
    {
      *(float *)((char *)a3 + v6) = (float)(v8 * *(float *)((char *)a3 + v5)) + (float)(a4 * *(float *)a3);
      a3 = (const struct D2DQuaternion *)((char *)a3 + 4);
      --v7;
    }
    while ( v7 );
  }
  v9 = 1.0
     / sqrtf_0(
         (float)((float)((float)(*(float *)a1 * *(float *)a1) + (float)(*((float *)a1 + 1) * *((float *)a1 + 1)))
               + (float)(*((float *)a1 + 2) * *((float *)a1 + 2)))
       + (float)(*((float *)a1 + 3) * *((float *)a1 + 3)));
  for ( i = 0LL; i < 4; ++i )
    *((float *)a1 + i) = v9 * *((float *)a1 + i);
  return a1;
}
