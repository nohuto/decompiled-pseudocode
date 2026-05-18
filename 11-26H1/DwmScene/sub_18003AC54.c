/*
 * XREFs of sub_18003AC54 @ 0x18003AC54
 * Callers:
 *     sub_18003BA5C @ 0x18003BA5C (sub_18003BA5C.c)
 *     sub_18003D09C @ 0x18003D09C (sub_18003D09C.c)
 *     sub_18009C714 @ 0x18009C714 (sub_18009C714.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_18003AC54(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm2
  __m128 v5; // xmm1

  result = a1;
  v4 = _mm_shuffle_ps(*a2, *a2, 27);
  v5 = _mm_shuffle_ps(v4, v4, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 27), _mm_shuffle_ps(*a3, *a3, 170)), (__m128)xmmword_1800FC270),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v5), (__m128)xmmword_1800FC280)),
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v4), (__m128)xmmword_1800FC290),
            _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 255), *a2)));
  return result;
}
