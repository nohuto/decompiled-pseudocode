/*
 * XREFs of sub_140073470 @ 0x140073470
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F0A0 @ 0x14000F0A0 (sub_14000F0A0.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140073470(__int64 a1, char a2)
{
  sub_14000F0A0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
