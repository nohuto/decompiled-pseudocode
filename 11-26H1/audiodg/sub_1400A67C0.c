/*
 * XREFs of sub_1400A67C0 @ 0x1400A67C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400A61CC @ 0x1400A61CC (sub_1400A61CC.c)
 */

__int64 __fastcall sub_1400A67C0(__int64 a1, char a2)
{
  sub_1400A61CC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
