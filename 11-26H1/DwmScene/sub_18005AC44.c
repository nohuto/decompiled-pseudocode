/*
 * XREFs of sub_18005AC44 @ 0x18005AC44
 * Callers:
 *     sub_1800594CC @ 0x1800594CC (sub_1800594CC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 */

__m128 *__fastcall sub_18005AC44(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax

  result = a1;
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 255), a3[3]),
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), a3[2])),
            _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), a3[1])),
          _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *a3));
  return result;
}
