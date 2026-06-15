/*
 * XREFs of sub_1400AB860 @ 0x1400AB860
 * Callers:
 *     <none>
 * Callees:
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400AB860(__int64 a1, char a2)
{
  sub_140046234(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
