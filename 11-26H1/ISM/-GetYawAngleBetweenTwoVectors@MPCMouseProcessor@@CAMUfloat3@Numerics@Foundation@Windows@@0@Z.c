/*
 * XREFs of ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C6BF0
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C72D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     acosf @ 0x18009AB00 (acosf.c)
 */

float __fastcall MPCMouseProcessor::GetYawAngleBetweenTwoVectors(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __m128 v7; // xmm0
  float v8; // xmm6_4
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  float result; // xmm0_4
  float v14; // xmm2_4

  *((_DWORD *)a1 + 1) = 0;
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  *((_DWORD *)a2 + 1) = 0;
  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 102);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v6 = _mm_div_ps(v3, _mm_sqrt_ps(_mm_shuffle_ps(v4, v4, 0)));
  *a1 = v6.m128_u64[0];
  v7 = (__m128)*((unsigned int *)a2 + 2);
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v8 = *(float *)a1;
  v9 = _mm_movelh_ps((__m128)*a2, v7);
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = v10.m128_f32[0] + v11.m128_f32[0];
  v7.m128_f32[0] = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v11.m128_i32[0] = *((_DWORD *)a1 + 2);
  v10.m128_f32[0] = v10.m128_f32[0] + v7.m128_f32[0];
  v12 = _mm_div_ps(v9, _mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)));
  v7.m128_u64[0] = v12.m128_u64[0];
  v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  *a2 = v7.m128_u64[0];
  *((_DWORD *)a2 + 2) = v12.m128_i32[0];
  result = 0.0;
  v14 = (float)((float)(*((float *)a2 + 1) * *((float *)a1 + 1)) + (float)(v8 * *(float *)a2))
      + (float)(v11.m128_f32[0] * v12.m128_f32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & _xmm) > 0.0000099999997 )
    result = acosf(v14);
  if ( v8 > *(float *)a2 && result != 0.0 )
    return result * -1.0;
  return result;
}
