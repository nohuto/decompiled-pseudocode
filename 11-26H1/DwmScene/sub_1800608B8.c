/*
 * XREFs of sub_1800608B8 @ 0x1800608B8
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_18004CEA4 @ 0x18004CEA4 (sub_18004CEA4.c)
 *     sub_18005FD88 @ 0x18005FD88 (sub_18005FD88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800608B8(__int64 *a1, __m128i *a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // xmm0_8

  sub_18004CEA4(a1);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = *a1;
  v7 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v7 )
  {
    sub_18005FD88(a1, v6, v5);
    v5 += 32LL;
  }
  return a1;
}
