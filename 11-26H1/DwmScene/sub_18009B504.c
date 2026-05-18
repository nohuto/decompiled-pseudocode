/*
 * XREFs of sub_18009B504 @ 0x18009B504
 * Callers:
 *     sub_18005005C @ 0x18005005C (sub_18005005C.c)
 * Callees:
 *     sub_18009B1D4 @ 0x18009B1D4 (sub_18009B1D4.c)
 *     sub_18009B4A0 @ 0x18009B4A0 (sub_18009B4A0.c)
 */

__int64 __fastcall sub_18009B504(__int64 a1)
{
  __m128 *v1; // r8
  __m128 si128; // xmm4
  __m128 v3; // xmm6
  __m128 v4; // xmm5
  __m128 v5; // xmm2
  __m128 *v6; // rcx
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm2
  __int64 v17; // rcx

  sub_18009B4A0(a1);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916E0);
  v3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191640);
  v4 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801915C0);
  v5 = _mm_mul_ps(v1[3], si128);
  v6->m128_i32[0] = v5.m128_i32[0];
  v6->m128_i32[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  v6->m128_i32[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  v6->m128_i32[3] = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  v7 = _mm_mul_ps(v1[1], si128);
  v6[1].m128_i32[0] = v7.m128_i32[0];
  v6[1].m128_i32[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  v6[1].m128_i32[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  v6[1].m128_i32[3] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  v8 = _mm_mul_ps(v1[2], si128);
  v6[2].m128_i32[0] = v8.m128_i32[0];
  v6[2].m128_i32[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  v6[2].m128_i32[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  v6[2].m128_i32[3] = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  v9 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(v3, *v1), _mm_mul_ps(v1[6], (__m128)xmmword_180191580)), _mm_mul_ps(v4, v1[8]));
  v6[3].m128_i32[0] = v9.m128_i32[0];
  v6[3].m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v6[3].m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v6[3].m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  v10 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801915D0);
  v11 = _mm_sub_ps(_mm_sub_ps(_mm_mul_ps(v3, *v1), _mm_mul_ps(v1[6], (__m128)xmmword_180191580)), _mm_mul_ps(v4, v1[8]));
  v6[4].m128_i32[0] = v11.m128_i32[0];
  v6[4].m128_i32[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v6[4].m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v6[4].m128_i32[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  v12 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191630);
  v13 = _mm_add_ps(_mm_mul_ps(v10, v1[6]), _mm_mul_ps(v3, *v1));
  v6[5].m128_i32[0] = v13.m128_i32[0];
  v6[5].m128_i32[1] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v6[5].m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  v6[5].m128_i32[3] = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  v14 = _mm_mul_ps(v1[5], v12);
  v6[6].m128_i32[0] = v14.m128_i32[0];
  v6[6].m128_i32[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  v6[6].m128_i32[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v6[6].m128_i32[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v15 = _mm_mul_ps(v1[7], v12);
  v6[7].m128_i32[0] = v15.m128_i32[0];
  v6[7].m128_i32[1] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  v6[7].m128_i32[2] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v6[7].m128_i32[3] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v16 = _mm_mul_ps(v1[4], v12);
  v6[8].m128_i32[0] = v16.m128_i32[0];
  v6[8].m128_i32[2] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  v6[8].m128_i32[1] = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  v6[8].m128_i32[3] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  sub_18009B1D4(v6, COERCE_DOUBLE(1050868099LL));
  return v17;
}
