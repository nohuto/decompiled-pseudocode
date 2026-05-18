/*
 * XREFs of sub_18009B1D4 @ 0x18009B1D4
 * Callers:
 *     sub_18005005C @ 0x18005005C (sub_18005005C.c)
 *     sub_18009B264 @ 0x18009B264 (sub_18009B264.c)
 *     sub_18009B504 @ 0x18009B504 (sub_18009B504.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_18009B1D4(__m128 *a1, double a2)
{
  __m128 v2; // xmm2

  v2 = _mm_shuffle_ps(*(__m128 *)&a2, *(__m128 *)&a2, 0);
  *a1 = _mm_mul_ps(v2, *a1);
  a1[1] = _mm_mul_ps(v2, a1[1]);
  a1[2] = _mm_mul_ps(v2, a1[2]);
  a1[3] = _mm_mul_ps(v2, a1[3]);
  a1[4] = _mm_mul_ps(v2, a1[4]);
  a1[5] = _mm_mul_ps(v2, a1[5]);
  a1[6] = _mm_mul_ps(v2, a1[6]);
  a1[7] = _mm_mul_ps(v2, a1[7]);
  a1[8] = _mm_mul_ps(v2, a1[8]);
}
