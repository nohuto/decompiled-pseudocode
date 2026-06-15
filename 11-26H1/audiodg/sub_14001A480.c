/*
 * XREFs of sub_14001A480 @ 0x14001A480
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001A4BC @ 0x14001A4BC (sub_14001A4BC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14001A480(__int64 a1, char a2)
{
  sub_14001A4BC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 56LL);
  return a1;
}
