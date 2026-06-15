/*
 * XREFs of sub_14008BA50 @ 0x14008BA50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14008B894 @ 0x14008B894 (sub_14008B894.c)
 */

__int64 __fastcall sub_14008BA50(__int64 a1, char a2)
{
  sub_14008B894(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
