/*
 * XREFs of sub_140094710 @ 0x140094710
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140094650 @ 0x140094650 (sub_140094650.c)
 */

__int64 __fastcall sub_140094710(__int64 a1, char a2)
{
  sub_140094650(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
