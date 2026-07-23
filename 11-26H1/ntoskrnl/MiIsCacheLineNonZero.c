/*
 * XREFs of MiIsCacheLineNonZero @ 0x140479558
 * Callers:
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiIsCacheLineNonZero(__int64 a1)
{
  unsigned __int64 v1; // rax
  __m128 v2; // xmm1
  __m128 v3; // xmm0
  __m128i v4; // xmm0

  v1 = 0LL;
  v2 = 0LL;
  do
  {
    v3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8 * v1));
    v1 += 2LL;
    v4 = (__m128i)_mm_or_ps(v3, v2);
    v2 = (__m128)v4;
  }
  while ( v1 < 8 );
  return v4.m128i_i64[0] | _mm_srli_si128(v4, 8).m128i_u64[0];
}
