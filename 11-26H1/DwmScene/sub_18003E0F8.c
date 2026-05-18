/*
 * XREFs of sub_18003E0F8 @ 0x18003E0F8
 * Callers:
 *     sub_18003E194 @ 0x18003E194 (sub_18003E194.c)
 * Callees:
 *     sub_180018958 @ 0x180018958 (sub_180018958.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003E0F8(double a1)
{
  __m128 *v1; // rbx
  __m128 v2; // xmm6
  __m128 *v3; // rbx
  __m128 v4; // xmm1
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF

  v1 = (__m128 *)sub_180018958(&xmmword_1800FA1F0, &v6);
  v2 = _mm_or_ps(_mm_and_ps(*(__m128 *)&a1, *v1), *(__m128 *)sub_180018958(&xmmword_1800FA2D0, &v7));
  v3 = (__m128 *)sub_180018958(&xmmword_1800FA1D0, &v7);
  v4 = _mm_cmple_ps(_mm_and_ps(*(__m128 *)&a1, *v3), *(__m128 *)sub_180018958(&xmmword_1800FA2D0, &v6));
  return _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v2, *(__m128 *)&a1), v2), v4), _mm_andnot_ps(v4, *(__m128 *)&a1));
}
