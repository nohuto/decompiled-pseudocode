/*
 * XREFs of sub_1400597A0 @ 0x1400597A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400455D8 @ 0x1400455D8 (sub_1400455D8.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400597A0(__int64 a1, char a2)
{
  sub_1400455D8(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
