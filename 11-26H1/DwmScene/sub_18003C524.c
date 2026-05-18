/*
 * XREFs of sub_18003C524 @ 0x18003C524
 * Callers:
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_1800500E0 @ 0x1800500E0 (sub_1800500E0.c)
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 *     sub_18008ECA0 @ 0x18008ECA0 (sub_18008ECA0.c)
 *     sub_18009BF04 @ 0x18009BF04 (sub_18009BF04.c)
 *     sub_1800D668C @ 0x1800D668C (sub_1800D668C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003C524(unsigned __int64 *a1)
{
  __m128 v1; // xmm3
  __m128 v2; // xmm2
  __m128 v3; // xmm1
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3

  v1 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_shuffle_ps(v2, v2, 153);
  v2.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_sqrt_ps(v4);
  v6 = _mm_cmpneq_ps(v4, (__m128)xmmword_1800FA100);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, (__m128)xmmword_1800FA150));
  *a1 = v7.m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}
