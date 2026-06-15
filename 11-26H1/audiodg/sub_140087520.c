/*
 * XREFs of sub_140087520 @ 0x140087520
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140087520(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 60) = -1073741823;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
