/*
 * XREFs of sub_140078610 @ 0x140078610
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140078610(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  sub_1400125D4((__int64 *)(a1 + 32));
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
