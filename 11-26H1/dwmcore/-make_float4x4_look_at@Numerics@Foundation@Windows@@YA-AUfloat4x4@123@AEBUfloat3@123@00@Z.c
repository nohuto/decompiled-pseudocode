/*
 * XREFs of ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x1801C8130
 * Callers:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801D5068 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@AEBUfloat3@Numerics@Found.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_look_at(__int64 a1, float *a2, float *a3, __int64 a4)
{
  __m128 v4; // xmm4
  __m128 v5; // xmm7
  __m128 v6; // xmm10
  float v7; // xmm12_4
  __m128 v8; // xmm1
  float v9; // xmm13_4
  __m128 v10; // xmm2
  __m128 v11; // xmm10
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm10
  float v16; // xmm9_4
  float v17; // xmm8_4
  __m128 v18; // xmm10
  __m128 v19; // xmm3
  __m128 v20; // xmm7
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm7
  float v24; // xmm6_4
  float v25; // xmm5_4
  __int64 result; // rax

  v4 = (__m128)*(unsigned int *)(a4 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  v8 = (__m128)*(unsigned int *)a2;
  v8.m128_f32[0] = v8.m128_f32[0] - *a3;
  v9 = a2[1];
  v10 = (__m128)LODWORD(v9);
  v10.m128_f32[0] = v9 - a3[1];
  v6.m128_u64[0] = _mm_unpacklo_ps(v8, v10).m128_u64[0];
  v11 = _mm_movelh_ps(v6, (__m128)COERCE_UNSIGNED_INT(a2[2] - a3[2]));
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_shuffle_ps(v12, v12, 102);
  v12.m128_f32[0] = (float)(v12.m128_f32[0] + v13.m128_f32[0]) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v14 = _mm_sqrt_ps(_mm_shuffle_ps(v12, v12, 0));
  v12.m128_i32[0] = *(_DWORD *)(a4 + 4);
  v15 = _mm_div_ps(v11, v14);
  v16 = v15.m128_f32[1];
  v17 = v15.m128_f32[0];
  v14.m128_f32[0] = v4.m128_f32[0] * v15.m128_f32[1];
  v18 = _mm_shuffle_ps(v15, v15, 170);
  v19 = v18;
  v19.m128_f32[0] = (float)(v18.m128_f32[0] * v12.m128_f32[0]) - v14.m128_f32[0];
  v4.m128_f32[0] = (float)(v4.m128_f32[0] * v17) - (float)(v18.m128_f32[0] * *(float *)a4);
  v5.m128_u64[0] = _mm_unpacklo_ps(v19, v4).m128_u64[0];
  v20 = _mm_movelh_ps(v5, (__m128)COERCE_UNSIGNED_INT((float)(*(float *)a4 * v16) - (float)(v12.m128_f32[0] * v17)));
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 102);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] + v22.m128_f32[0]) + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
  v23 = _mm_div_ps(v20, _mm_sqrt_ps(_mm_shuffle_ps(v21, v21, 0)));
  v21.m128_i32[0] = v23.m128_i32[0];
  v23.m128_f32[0] = _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
  v24 = (float)(v23.m128_f32[0] * v16) - (float)(v18.m128_f32[0] * v23.m128_f32[1]);
  v25 = (float)(v18.m128_f32[0] * v21.m128_f32[0]) - (float)(v23.m128_f32[0] * v17);
  *(float *)(a1 + 4) = v24;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(float *)(a1 + 20) = v25;
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_DWORD *)(a1 + 40) = v18.m128_i32[0];
  v18.m128_f32[0] = v18.m128_f32[0] * a2[2];
  v4.m128_f32[0] = (float)(v17 * v23.m128_f32[1]) - (float)(v21.m128_f32[0] * v16);
  *(_DWORD *)(a1 + 32) = v23.m128_i32[0];
  v23.m128_f32[0] = v23.m128_f32[0] * a2[2];
  *(_DWORD *)(a1 + 36) = v4.m128_i32[0];
  v4.m128_f32[0] = v4.m128_f32[0] * a2[2];
  *(float *)(a1 + 8) = v17;
  *(float *)(a1 + 24) = v16;
  *(_DWORD *)(a1 + 56) = COERCE_UNSIGNED_INT((float)((float)(v9 * v16) + (float)(v7 * v17)) + v18.m128_f32[0]) ^ _xmm;
  *(_DWORD *)a1 = v21.m128_i32[0];
  *(_DWORD *)(a1 + 48) = COERCE_UNSIGNED_INT((float)((float)(v9 * v23.m128_f32[1]) + (float)(v7 * v21.m128_f32[0])) + v23.m128_f32[0]) ^ _xmm;
  *(_DWORD *)(a1 + 16) = v23.m128_i32[1];
  *(_DWORD *)(a1 + 52) = COERCE_UNSIGNED_INT((float)((float)(v25 * v9) + (float)(v24 * v7)) + v4.m128_f32[0]) ^ _xmm;
  return result;
}
