/*
 * XREFs of sub_14005E0E8 @ 0x14005E0E8
 * Callers:
 *     sub_14005E150 @ 0x14005E150 (sub_14005E150.c)
 *     sub_14005E544 @ 0x14005E544 (sub_14005E544.c)
 *     sub_14005ED60 @ 0x14005ED60 (sub_14005ED60.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005DE7C @ 0x14005DE7C (sub_14005DE7C.c)
 */

__int64 __fastcall sub_14005E0E8(__int64 a1)
{
  sub_14005DE7C(a1);
  j_j__o_free(a1);
  return a1;
}
