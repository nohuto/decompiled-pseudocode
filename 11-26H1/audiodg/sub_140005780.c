/*
 * XREFs of sub_140005780 @ 0x140005780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400058DC @ 0x1400058DC (sub_1400058DC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140005780(__int64 a1, char a2)
{
  sub_1400058DC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 48LL);
  return a1;
}
