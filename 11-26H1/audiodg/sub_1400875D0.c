/*
 * XREFs of sub_1400875D0 @ 0x1400875D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140087460 @ 0x140087460 (sub_140087460.c)
 */

__int64 __fastcall sub_1400875D0(__int64 a1, char a2)
{
  sub_140087460(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
