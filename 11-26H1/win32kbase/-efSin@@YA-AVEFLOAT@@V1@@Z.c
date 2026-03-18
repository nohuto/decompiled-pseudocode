/*
 * XREFs of ?efSin@@YA?AVEFLOAT@@V1@@Z @ 0x14014A420
 * Callers:
 *     ?efCos@@YA?AVEFLOAT@@V1@@Z @ 0x14014A3F0 (-efCos@@YA-AVEFLOAT@@V1@@Z.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1401F1450 (-bComputeUnits@EXFORMOBJ@@QEBA_NJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     eFraction @ 0x14014A558 (eFraction.c)
 */

__int64 __fastcall efSin(__int64 a1)
{
  __m128 v1; // xmm1
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r9
  int v7; // r9d
  BOOL v8; // r10d
  double v9; // xmm0_8
  __m128 v10; // xmm4
  int v11; // ecx
  __int64 v12; // r9
  __m128 v13; // xmm3
  __m128 v14; // xmm3

  v1 = (__m128)_mm_cvtsi32_si128(a1);
  if ( v1.m128_f32[0] < 0.0 )
    v1 = _mm_xor_ps(v1, (__m128)(unsigned int)_xmm);
  v1.m128_f32[0] = v1.m128_f32[0] * *(float *)&FP_SINE_FACTOR;
  v2 = 0LL;
  v3 = (unsigned int)_mm_cvtsi128_si32((__m128i)v1);
  v4 = (unsigned __int8)((int)v3 >> 23);
  if ( (unsigned int)v4 <= 0x9E )
  {
    v5 = v3 & 0x7FFFFF | 0x800000;
    if ( (unsigned int)v4 < 0x76 )
    {
      a1 = (unsigned int)(118 - v4);
      v6 = v5 >> (118 - (unsigned __int8)v4);
    }
    else
    {
      a1 = (unsigned int)(v4 - 118);
      v6 = v5 << ((unsigned __int8)v4 - 118);
    }
    v2 = v6 >> 32;
    if ( (int)v3 < 0 )
      v2 = (unsigned int)-(int)v2;
  }
  v9 = eFraction(a1, v4, v3, v2);
  v11 = v7 >> 5;
  if ( ((v7 >> 5) & 2) != 0 )
    v8 = !v8;
  v12 = v7 & 0x1F;
  if ( (v11 & 1) != 0 )
  {
    v13 = (__m128)*((unsigned int *)&unk_1402AA360 - (unsigned int)v12);
    v13.m128_f32[0] = (float)(v13.m128_f32[0] - *((float *)&unk_1402AA35C - v12)) * *(float *)&v9;
    v14 = _mm_xor_ps(v13, v10);
    v14.m128_f32[0] = v14.m128_f32[0] + *((float *)&unk_1402AA360 - (unsigned int)v12);
  }
  else
  {
    v14 = (__m128)LODWORD(gaefSin[v12 + 1]);
    v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] - gaefSin[v12]) * *(float *)&v9) + gaefSin[v12];
  }
  if ( v8 )
    v14 = _mm_xor_ps(v14, v10);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v14);
}
