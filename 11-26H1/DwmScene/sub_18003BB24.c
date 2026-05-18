/*
 * XREFs of sub_18003BB24 @ 0x18003BB24
 * Callers:
 *     sub_18009BF04 @ 0x18009BF04 (sub_18009BF04.c)
 * Callees:
 *     sub_18003D360 @ 0x18003D360 (sub_18003D360.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_DWORD *__fastcall sub_18003BB24(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  unsigned __int32 v8; // xmm7_4
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  unsigned __int32 v12; // xmm6_4
  __int32 v13; // xmm4_4
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  _DWORD *result; // rax
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]

  sub_18003D718(a1);
  v4 = *(_DWORD *)(a1 + 180);
  v22 = *(_QWORD *)(a1 + 172);
  v18 = 1065353216LL;
  v19 = 0;
  sub_18003D360(a1, &v20, &v18);
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v20, (__m128)v21);
  v6 = _mm_mul_ps(v5, v5);
  v21 = 0;
  v7 = _mm_shuffle_ps(v6, v6, 102);
  v6.m128_f32[0] = (float)(v6.m128_f32[0] + v7.m128_f32[0]) + _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v20 = 0x3F80000000000000LL;
  v8 = _mm_sqrt_ps(_mm_shuffle_ps(v6, v6, 0)).m128_u32[0];
  sub_18003D360(a1, &v18, &v20);
  v21 = 1065353216;
  v9 = _mm_movelh_ps((__m128)(unsigned __int64)v18, (__m128)v19);
  v10 = _mm_mul_ps(v9, v9);
  v11 = _mm_shuffle_ps(v10, v10, 102);
  v10.m128_f32[0] = (float)(v10.m128_f32[0] + v11.m128_f32[0]) + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v20 = 0LL;
  v12 = _mm_sqrt_ps(_mm_shuffle_ps(v10, v10, 0)).m128_u32[0];
  sub_18003D360(a1, &v18, &v20);
  COERCE_FLOAT(v13 = _mm_load_si128((const __m128i *)&xmmword_180191740).m128i_i32[0]);
  v14 = _mm_movelh_ps((__m128)(unsigned __int64)v18, (__m128)v19);
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 102);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v16.m128_i32[0] = HIDWORD(v22);
  *a2 = (v8 ^ v22) & v13 ^ v22;
  a2[1] = (v12 ^ v16.m128_i32[0]) & v13 ^ v16.m128_i32[0];
  result = a2;
  a2[2] = (_mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)).m128_u32[0] ^ v4) & v13 ^ v4;
  return result;
}
