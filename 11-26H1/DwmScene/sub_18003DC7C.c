/*
 * XREFs of sub_18003DC7C @ 0x18003DC7C
 * Callers:
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003DC7C(double a1, double a2, double a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm5
  __m128 v5; // xmm7
  __m128 v6; // xmm4
  __m128 v7; // xmm5
  __m128 v8; // xmm0
  __m128 v9; // xmm5
  __m128 v10; // xmm10
  __m128 v11; // xmm8
  __m128 v12; // xmm8
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm8
  __m128 v19; // xmm2
  __m128 v20; // xmm5
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm9
  __m128 v24; // xmm1
  __m128 v25; // xmm5
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm1

  v3 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 201);
  v4 = _mm_mul_ps(*(__m128 *)&a2, *(__m128 *)&a2);
  v5 = *(__m128 *)&a1;
  v6 = _mm_shuffle_ps(v4, v4, 153);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v7 = _mm_shuffle_ps(v4, v4, 0);
  v8 = _mm_sqrt_ps(v7);
  v9 = _mm_cmpneq_ps(v7, (__m128)xmmword_1800FA100);
  v10 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v8), _mm_div_ps(*(__m128 *)&a2, v8)), v9),
          _mm_andnot_ps(v9, (__m128)xmmword_1800FA150));
  v11 = _mm_shuffle_ps(v10, v10, 210);
  v12 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v11, v3), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 210), _mm_shuffle_ps(v3, v3, 201))),
          (__m128)xmmword_1800FA2A0);
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 153);
  v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  v15 = _mm_shuffle_ps(v13, v13, 0);
  v16 = _mm_sqrt_ps(v15);
  v17 = _mm_cmpneq_ps(v15, (__m128)xmmword_1800FA100);
  v18 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(v12, v16), _mm_cmpneq_ps(v16, (__m128)0LL)), v17),
          _mm_andnot_ps(v17, (__m128)xmmword_1800FA150));
  v19 = _mm_shuffle_ps(v10, v10, 201);
  v20 = _mm_shuffle_ps(v18, v18, 210);
  v21 = _mm_sub_ps((__m128)0LL, v5);
  v22 = _mm_mul_ps(v21, v18);
  v23 = _mm_mul_ps(v21, v10);
  v24 = _mm_shuffle_ps(v22, v22, 153);
  v25 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v20, v19), _mm_mul_ps(_mm_shuffle_ps(v20, v20, 210), _mm_shuffle_ps(v19, v19, 201))),
          (__m128)xmmword_1800FA2A0);
  v26 = _mm_mul_ps(v21, v25);
  v22.m128_f32[0] = (float)(v22.m128_f32[0] + v24.m128_f32[0]) + _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  v27 = _mm_shuffle_ps(v26, v26, 153);
  v26.m128_f32[0] = v26.m128_f32[0] + v27.m128_f32[0];
  v16.m128_f32[0] = _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  v28 = _mm_shuffle_ps(v23, v23, 153);
  v26.m128_f32[0] = v26.m128_f32[0] + v16.m128_f32[0];
  v23.m128_f32[0] = (float)(v23.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  return _mm_shuffle_ps(
           _mm_shuffle_ps(
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_1800FA1C0, _mm_shuffle_ps(v22, v22, 0)),
               _mm_and_ps(v18, (__m128)xmmword_1800FA1C0)),
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_1800FA1C0, _mm_shuffle_ps(v26, v26, 0)),
               _mm_and_ps(v25, (__m128)xmmword_1800FA1C0)),
             68),
           _mm_shuffle_ps(
             _mm_or_ps(
               _mm_andnot_ps((__m128)xmmword_1800FA1C0, _mm_shuffle_ps(v23, v23, 0)),
               _mm_and_ps(v10, (__m128)xmmword_1800FA1C0)),
             (__m128)xmmword_1800FA2E0,
             68),
           136);
}
