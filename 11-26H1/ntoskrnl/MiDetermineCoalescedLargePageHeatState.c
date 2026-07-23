/*
 * XREFs of MiDetermineCoalescedLargePageHeatState @ 0x1404738A4
 * Callers:
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDetermineCoalescedLargePageHeatState(unsigned int a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  if ( (stru_140E366D8.WaitRegister.Flags & 2) == 0 || a1 > 1 && (stru_140E366D8.WaitRegister.Flags & 4) != 0 )
  {
LABEL_8:
    if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 && (!a4 || (*(_DWORD *)(a4 + 14096) & 2) == 0) )
      return (a2 & 1) == 0;
    return 1;
  }
  if ( a4 && (*(_DWORD *)(a4 + 14096) & 2) != 0 )
  {
    if ( (a1 <= 1 || (stru_140E366D8.WaitRegister.Flags & 4) == 0) && (*(_DWORD *)(a4 + 14096) & 2) == 0 )
      return (a2 & 1) == 0;
    goto LABEL_8;
  }
  if ( a3 == 1 )
    return (a2 & 1) == 0;
  if ( (a2 & 2) != 0 )
    *a5 = 1;
  return 0;
}
