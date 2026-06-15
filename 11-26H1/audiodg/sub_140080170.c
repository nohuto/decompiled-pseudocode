/*
 * XREFs of sub_140080170 @ 0x140080170
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400800EC @ 0x1400800EC (sub_1400800EC.c)
 */

__int64 __fastcall sub_140080170(__int64 a1, char a2)
{
  sub_1400800EC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
