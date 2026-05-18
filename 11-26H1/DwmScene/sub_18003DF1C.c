/*
 * XREFs of sub_18003DF1C @ 0x18003DF1C
 * Callers:
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_18003D798 @ 0x18003D798 (sub_18003D798.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003DF1C(double a1, double a2, double a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm6
  __m128 v5; // xmm5
  __m128 v6; // xmm9
  __m128 v7; // xmm3
  __m128 v8; // xmm10
  __m128 v9; // xmm9
  __m128 v10; // xmm8
  __m128 v11; // xmm11
  __m128 v12; // xmm0
  __m128 v13; // xmm5
  __m128 v14; // xmm0
  __m128 v15; // xmm10
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm5
  __m128 v19; // xmm10
  __m128 v20; // xmm4
  __m128 v21; // xmm0
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm1
  __m128 v25; // xmm2

  v3 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 85);
  v4 = *(__m128 *)&a1;
  v5 = _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 105);
  v6 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 170);
  v7 = _mm_mul_ps(v6, (__m128)xmmword_1800FC2E0);
  v8 = _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0);
  v9 = _mm_cmple_ps(v6, (__m128)xmmword_1800FA320);
  v10 = _mm_cmple_ps(_mm_add_ps(v3, v8), (__m128)xmmword_1800FA320);
  v11 = _mm_cmple_ps(_mm_sub_ps(v3, v8), (__m128)xmmword_1800FA320);
  v12 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a3, 64);
  v13 = _mm_add_ps(v5, _mm_shuffle_ps(v12, v12, 120));
  v14 = _mm_shuffle_ps(*(__m128 *)&a2, v4, 106);
  v15 = _mm_add_ps(
          _mm_add_ps(_mm_add_ps(_mm_mul_ps(v8, (__m128)xmmword_1800FC2C0), (__m128)xmmword_1800FA310), v7),
          _mm_mul_ps(v3, (__m128)xmmword_1800FC2D0));
  v16 = _mm_mul_ps(
          _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a2, 1), _mm_shuffle_ps(v14, v14, 120)),
          (__m128)xmmword_1800FC2D0);
  v17 = _mm_shuffle_ps(v15, v13, 4);
  v18 = _mm_shuffle_ps(v13, v16, 73);
  v19 = _mm_shuffle_ps(v15, v16, 46);
  v20 = _mm_or_ps(
          _mm_andnot_ps(
            v9,
            _mm_or_ps(_mm_andnot_ps(v10, _mm_shuffle_ps(v18, v19, 110)), _mm_and_ps(_mm_shuffle_ps(v18, v19, 132), v10))),
          _mm_and_ps(
            _mm_or_ps(_mm_andnot_ps(v11, _mm_shuffle_ps(v17, v18, 214)), _mm_and_ps(_mm_shuffle_ps(v17, v18, 136), v11)),
            v9));
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 238);
  v23 = _mm_add_ps(v22, v21);
  v24 = _mm_shuffle_ps(v23, v23, 64);
  v25 = _mm_add_ps(_mm_shuffle_ps(v22, v24, 240), v24);
  return _mm_div_ps(v20, _mm_sqrt_ps(_mm_shuffle_ps(v25, v25, 170)));
}
