/*
 * XREFs of sub_14005E080 @ 0x14005E080
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005DE20 @ 0x14005DE20 (sub_14005DE20.c)
 */

__int64 __fastcall sub_14005E080(__int64 a1, char a2)
{
  sub_14005DE20(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
