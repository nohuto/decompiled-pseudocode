/*
 * XREFs of sub_1400031E4 @ 0x1400031E4
 * Callers:
 *     sub_14000303C @ 0x14000303C (sub_14000303C.c)
 *     sub_140003BF4 @ 0x140003BF4 (sub_140003BF4.c)
 *     sub_140048040 @ 0x140048040 (sub_140048040.c)
 *     sub_140048404 @ 0x140048404 (sub_140048404.c)
 *     sub_1400484A8 @ 0x1400484A8 (sub_1400484A8.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 * Callees:
 *     sub_140003210 @ 0x140003210 (sub_140003210.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400031E4(__int64 a1)
{
  sub_140003210();
  j_j__o_free(a1, 24LL);
  return a1;
}
