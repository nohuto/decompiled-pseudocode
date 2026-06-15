/*
 * XREFs of sub_1400A95A0 @ 0x1400A95A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400A95A0(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
