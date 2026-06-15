/*
 * XREFs of sub_1400786E0 @ 0x1400786E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140077F04 @ 0x140077F04 (sub_140077F04.c)
 */

__int64 __fastcall sub_1400786E0(__int64 a1, char a2)
{
  sub_140077F04(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
