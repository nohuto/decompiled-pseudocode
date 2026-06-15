/*
 * XREFs of sub_14008A430 @ 0x14008A430
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14008A3AC @ 0x14008A3AC (sub_14008A3AC.c)
 */

__int64 __fastcall sub_14008A430(__int64 a1, char a2)
{
  sub_14008A3AC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
