/*
 * XREFs of sub_140087590 @ 0x140087590
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400873E0 @ 0x1400873E0 (sub_1400873E0.c)
 */

__int64 __fastcall sub_140087590(__int64 a1, char a2)
{
  sub_1400873E0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
