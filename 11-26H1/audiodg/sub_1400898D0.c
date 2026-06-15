/*
 * XREFs of sub_1400898D0 @ 0x1400898D0
 * Callers:
 *     sub_1400898B0 @ 0x1400898B0 (sub_1400898B0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400897DC @ 0x1400897DC (sub_1400897DC.c)
 */

__int64 __fastcall sub_1400898D0(__int64 a1, char a2)
{
  sub_1400897DC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
