/*
 * XREFs of sub_180030AAC @ 0x180030AAC
 * Callers:
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 * Callees:
 *     sub_18002DF50 @ 0x18002DF50 (sub_18002DF50.c)
 *     sub_1800306DC @ 0x1800306DC (sub_1800306DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180030AAC(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_1800306DC(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002DF50(a1, v6, v5);
    v5 += 64LL;
  }
  return a1;
}
