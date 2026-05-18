/*
 * XREFs of sub_18009B264 @ 0x18009B264
 * Callers:
 *     sub_18001BF48 @ 0x18001BF48 (sub_18001BF48.c)
 *     sub_18004FFB0 @ 0x18004FFB0 (sub_18004FFB0.c)
 * Callees:
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 *     sub_18009B1D4 @ 0x18009B1D4 (sub_18009B1D4.c)
 */

__int64 __fastcall sub_18009B264(__int64 a1)
{
  __m128 *v1; // r8
  __m128 si128; // xmm4
  __m128 v3; // xmm5
  __m128 v4; // xmm2
  __m128 *v5; // rcx
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  unsigned __int32 v11; // xmm0_4
  unsigned __int32 v12; // xmm1_4
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __int64 v17; // rcx

  sub_18009B150(a1);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191650);
  v3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916F0);
  v4 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(v1[3], (__m128)xmmword_1801915B0), _mm_mul_ps(v1[4], (__m128)xmmword_1801915B0)),
         _mm_mul_ps((__m128)_mm_load_si128((const __m128i *)&xmmword_1801915A0), v1[5]));
  v5->m128_i32[0] = v4.m128_i32[0];
  v5->m128_i32[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v5->m128_i32[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  v5->m128_i32[3] = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  v6 = _mm_mul_ps(v1[1], si128);
  v5[1].m128_i32[0] = v6.m128_i32[0];
  v5[1].m128_i32[1] = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  v5[1].m128_i32[2] = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v5[1].m128_i32[3] = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
  v7 = _mm_mul_ps(v1[2], si128);
  v5[2].m128_i32[0] = v7.m128_i32[0];
  v5[2].m128_i32[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  v5[2].m128_i32[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  v5[2].m128_i32[3] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  v8 = _mm_mul_ps(si128, *v1);
  v5[3].m128_i32[0] = v8.m128_i32[0];
  v5[3].m128_i32[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  v5[3].m128_i32[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  v5[3].m128_i32[3] = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  v9 = _mm_mul_ps(v1[8], v3);
  v5[4].m128_i32[0] = v9.m128_i32[0];
  v5[4].m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v5[4].m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v5[4].m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  v10 = _mm_mul_ps(v1[6], v3);
  v5[5].m128_i32[0] = v10.m128_i32[0];
  v11 = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  v12 = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  v5[5].m128_i32[3] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  v13 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191700);
  v5[5].m128_i32[1] = v11;
  v5[5].m128_i32[2] = v12;
  v14 = _mm_sub_ps(
          _mm_sub_ps(_mm_mul_ps(v13, v1[5]), _mm_mul_ps(v1[3], (__m128)xmmword_180191610)),
          _mm_mul_ps(v1[4], (__m128)xmmword_180191610));
  v5[6].m128_i32[0] = v14.m128_i32[0];
  v5[6].m128_i32[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
  v5[6].m128_i32[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v5[6].m128_i32[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v15 = _mm_mul_ps(v1[7], v3);
  v5[7].m128_i32[0] = v15.m128_i32[0];
  v5[7].m128_i32[1] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  v5[7].m128_i32[2] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  v5[7].m128_i32[3] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v16 = _mm_sub_ps(_mm_mul_ps(v1[3], v3), _mm_mul_ps(v1[4], v3));
  v5[8].m128_i32[0] = v16.m128_i32[0];
  v5[8].m128_i32[2] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  v5[8].m128_i32[1] = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  v5[8].m128_i32[3] = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  sub_18009B1D4(v5, COERCE_DOUBLE(1078530011LL));
  return v17;
}
