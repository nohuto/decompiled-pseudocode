/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x140176F90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 UserIsCurrentThreadGdiScaled()
{
  int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v1 = 1;
  if ( !PtiCurrent()
    || !*((_QWORD *)PtiCurrent() + 62)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) == 0
    || (CurrentThreadDpiAwarenessContext & 0x4000000F) != 0x40000000 )
  {
    if ( !PtiCurrent() )
      return 0;
    if ( !*((_QWORD *)PtiCurrent() + 62) )
      return 0;
    v2 = **(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL);
    if ( (*(_DWORD *)(v2 + 64) & 1) == 0 || (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
      return 0;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000000) == 0 )
      return 0;
  }
  return v1;
}
