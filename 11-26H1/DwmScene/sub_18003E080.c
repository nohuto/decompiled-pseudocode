/*
 * XREFs of sub_18003E080 @ 0x18003E080
 * Callers:
 *     sub_18003DEAC @ 0x18003DEAC (sub_18003DEAC.c)
 * Callees:
 *     sub_18003E194 @ 0x18003E194 (sub_18003E194.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003E080(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-38h] BYREF
  __m128 v3; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0LL;
  v2 = 0LL;
  sub_18003E194(&v3, &v2);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps(v2, (__m128)xmmword_1800FA330), _mm_and_ps(v3, (__m128)xmmword_1800FA2A0)),
           _mm_or_ps(_mm_and_ps(*(__m128 *)&a1, (__m128)xmmword_1800FA2A0), (__m128)xmmword_1800FA2E0));
}
