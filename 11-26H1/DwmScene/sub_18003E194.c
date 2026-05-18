/*
 * XREFs of sub_18003E194 @ 0x18003E194
 * Callers:
 *     sub_18003E080 @ 0x18003E080 (sub_18003E080.c)
 * Callees:
 *     sub_18003E0F8 @ 0x18003E0F8 (sub_18003E0F8.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_18003E194(__m128 *a1, __m128 *a2, double a3)
{
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  __m128 v7; // xmm0
  __m128 v8; // xmm7
  __m128 v9; // xmm3
  __m128 v10; // xmm4

  v5 = _mm_sub_ps(
         *(__m128 *)&a3,
         _mm_mul_ps(
           sub_18003E0F8(*(double *)_mm_mul_ps(*(__m128 *)&a3, (__m128)xmmword_1800FA2F0).m128_u64),
           (__m128)xmmword_1800FA160));
  v6 = _mm_and_ps(v5, (__m128)xmmword_1800FA1F0);
  v7 = _mm_sub_ps(_mm_or_ps(v6, (__m128)xmmword_1800FA170), v5);
  v8 = _mm_cmple_ps(_mm_andnot_ps(v6, v5), (__m128)xmmword_1800FA350);
  v9 = _mm_or_ps(_mm_andnot_ps(v8, v7), _mm_and_ps(v8, v5));
  v10 = _mm_mul_ps(v9, v9);
  *a1 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800FA210, (__m128)xmmword_1800FA210, 0), v10),
                            _mm_shuffle_ps((__m128)xmmword_1800FA1E0, (__m128)xmmword_1800FA1E0, 255)),
                          v10),
                        _mm_shuffle_ps((__m128)xmmword_1800FA1E0, (__m128)xmmword_1800FA1E0, 170)),
                      v10),
                    _mm_shuffle_ps((__m128)xmmword_1800FA1E0, (__m128)xmmword_1800FA1E0, 85)),
                  v10),
                _mm_shuffle_ps((__m128)xmmword_1800FA1E0, (__m128)xmmword_1800FA1E0, 0)),
              v10),
            (__m128)xmmword_1800FA310),
          v9);
  *a2 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800FA130, (__m128)xmmword_1800FA130, 0), v10),
                            _mm_shuffle_ps((__m128)xmmword_1800FA300, (__m128)xmmword_1800FA300, 255)),
                          v10),
                        _mm_shuffle_ps((__m128)xmmword_1800FA300, (__m128)xmmword_1800FA300, 170)),
                      v10),
                    _mm_shuffle_ps((__m128)xmmword_1800FA300, (__m128)xmmword_1800FA300, 85)),
                  v10),
                _mm_shuffle_ps((__m128)xmmword_1800FA300, (__m128)xmmword_1800FA300, 0)),
              v10),
            (__m128)xmmword_1800FA310),
          _mm_or_ps(_mm_and_ps(v8, (__m128)xmmword_1800FA310), _mm_andnot_ps(v8, (__m128)xmmword_1800FA2B0)));
}
