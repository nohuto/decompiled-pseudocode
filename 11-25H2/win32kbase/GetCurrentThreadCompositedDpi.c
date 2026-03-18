/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x140040DF8
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     CreateMonitorRegion @ 0x140063A98 (CreateMonitorRegion.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 GetCurrentThreadCompositedDpi()
{
  unsigned __int16 v0; // bx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax

  v0 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    v2 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    if ( !*(_QWORD *)(v2 + 496) )
      return 0;
    v3 = (_QWORD *)W32GetCurrentThreadNonPaged();
    v4 = v3 ? *v3 : 0LL;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v4 + 496) + 8LL) + 64LL) & 1) == 0 )
      return 0;
  }
  return v0;
}
