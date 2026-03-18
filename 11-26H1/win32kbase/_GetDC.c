/*
 * XREFs of _GetDC @ 0x1400360E0
 * Callers:
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 * Callees:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 */

__int64 __fastcall GetDC(struct tagWND *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    return GetDCEx(a1, 0LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(0LL, a2);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  v4 = *(_QWORD *)(v3 + 488);
  if ( v4 )
  {
    a1 = *(struct tagWND **)(*(_QWORD *)(v4 + 8) + 24LL);
    return GetDCEx(a1, 0LL);
  }
  return 0LL;
}
