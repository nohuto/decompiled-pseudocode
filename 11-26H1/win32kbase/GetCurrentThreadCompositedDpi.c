/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x140083D64
 * Callers:
 *     CreateMonitorRegion @ 0x1400839C4 (CreateMonitorRegion.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int16 v4; // bx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax

  v4 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( v4 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v3, v2);
    v8 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    if ( !*(_QWORD *)(v8 + 488) )
      return 0;
    v9 = (_QWORD *)PsGetCurrentThreadWin32Thread(v7, v6);
    v10 = v9 ? *v9 : 0LL;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v10 + 488) + 8LL) + 64LL) & 1) == 0 )
      return 0;
  }
  return v4;
}
