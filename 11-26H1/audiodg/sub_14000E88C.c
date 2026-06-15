/*
 * XREFs of sub_14000E88C @ 0x14000E88C
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 * Callees:
 *     sub_14000E8B8 @ 0x14000E8B8 (sub_14000E8B8.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14000E88C(__int64 a1)
{
  sub_14000E8B8();
  j_j__o_free(a1, 72LL);
  return a1;
}
