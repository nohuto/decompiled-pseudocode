/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x1401EA770
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall UserIsCurrentThreadGdiScaled(__int64 a1, __int64 a2)
{
  int CurrentThreadDpiAwarenessContext; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v7 = 1;
  if ( !PtiCurrent(v4, v3)
    || !*((_QWORD *)PtiCurrent(v6, v5) + 61)
    || (v6 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v6, v5) + 61) + 8LL),
        LOBYTE(v6) = (*(_BYTE *)(v6 + 64) & 1) != 0,
        ((unsigned __int8)v6 & ((CurrentThreadDpiAwarenessContext & 0x4000000F) == 0x40000000)) == 0) )
  {
    if ( !PtiCurrent(v6, v5) )
      return 0;
    if ( !*((_QWORD *)PtiCurrent(v9, v8) + 61) )
      return 0;
    v12 = *(__int64 **)(*((_QWORD *)PtiCurrent(v11, v10) + 61) + 8LL);
    v13 = *v12;
    LOBYTE(v13) = (*(_BYTE *)(*v12 + 64) & 1) != 0;
    if ( ((unsigned __int8)v13 & ((CurrentThreadDpiAwarenessContext & 0xF) == 0)) == 0 )
      return 0;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000000) == 0 )
      return 0;
  }
  return v7;
}
