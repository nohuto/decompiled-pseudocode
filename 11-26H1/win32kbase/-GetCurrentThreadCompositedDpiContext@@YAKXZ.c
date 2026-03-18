/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140083B38
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorRect @ 0x140083AF4 (GetMonitorRect.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpiContext(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edi
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v4 = CurrentThreadDpiAwarenessContext;
  v5 = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
  {
    LOBYTE(v4) = CurrentThreadDpiAwarenessContext & 0xF;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v4, v3);
    v9 = 0LL;
    v10 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    if ( !*(_QWORD *)(v10 + 488) )
      return 18;
    v11 = (__int64 *)PsGetCurrentThreadWin32Thread(v8, v7);
    if ( v11 )
      v9 = *v11;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v9 + 488) + 8LL) + 64LL) & 1) == 0 )
      return 18;
  }
  return v5;
}
