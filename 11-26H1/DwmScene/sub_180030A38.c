/*
 * XREFs of sub_180030A38 @ 0x180030A38
 * Callers:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 * Callees:
 *     sub_18002AE20 @ 0x18002AE20 (sub_18002AE20.c)
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180030A38(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18002AE20(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18002DE54(a1, v6, v5);
    v5 += 40LL;
  }
  return a1;
}
