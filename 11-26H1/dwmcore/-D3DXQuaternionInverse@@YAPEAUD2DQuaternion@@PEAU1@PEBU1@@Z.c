/*
 * XREFs of ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1802930CC
 * Callers:
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180191EF4 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1801ABC68 (WithinEpsilon_0.c)
 */

__m128 *__fastcall D3DXQuaternionInverse(__m128 *a1, const struct D2DQuaternion *a2)
{
  float v2; // xmm4_4
  float v3; // xmm3_4
  __m128 v4; // xmm2

  v2 = *(float *)a2;
  v3 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a2 + 1)) + (float)(v2 * v2))
             + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)))
     + (float)(*((float *)a2 + 3) * *((float *)a2 + 3));
  if ( v3 <= 1.0842022e-19 )
  {
    a1->m128_u64[0] = 0LL;
    a1->m128_u64[1] = 0LL;
  }
  else
  {
    a1->m128_i32[0] = LODWORD(v2) ^ _xmm;
    a1->m128_i32[1] = *((_DWORD *)a2 + 1) ^ _xmm;
    v4 = (__m128)LODWORD(FLOAT_1_0);
    a1->m128_i32[2] = *((_DWORD *)a2 + 2) ^ _xmm;
    a1->m128_i32[3] = *((_DWORD *)a2 + 3);
    if ( !WithinEpsilon_0(v3, 1.0) )
    {
      v4.m128_f32[0] = 1.0 / v3;
      *a1 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a1);
    }
  }
  return a1;
}
