/*
 * XREFs of sub_1400057C0 @ 0x1400057C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400057FC @ 0x1400057FC (sub_1400057FC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400057C0(__int64 a1, char a2)
{
  sub_1400057FC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 184LL);
  return a1;
}
