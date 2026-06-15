/*
 * XREFs of sub_14008990C @ 0x14008990C
 * Callers:
 *     sub_1400898C0 @ 0x1400898C0 (sub_1400898C0.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14008980C @ 0x14008980C (sub_14008980C.c)
 */

__int64 __fastcall sub_14008990C(__int64 a1, char a2)
{
  sub_14008980C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
