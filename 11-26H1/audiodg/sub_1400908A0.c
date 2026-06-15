/*
 * XREFs of sub_1400908A0 @ 0x1400908A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140090808 @ 0x140090808 (sub_140090808.c)
 */

__int64 __fastcall sub_1400908A0(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 124) = -1073741823;
  sub_140090808(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
