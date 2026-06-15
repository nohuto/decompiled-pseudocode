/*
 * XREFs of sub_1400530B0 @ 0x1400530B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140052D4C @ 0x140052D4C (sub_140052D4C.c)
 */

__int64 __fastcall sub_1400530B0(__int64 a1, char a2)
{
  sub_140052D4C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
