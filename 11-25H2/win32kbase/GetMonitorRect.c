/*
 * XREFs of GetMonitorRect @ 0x140063BC4
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x14012B338 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x140064158 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetMonitorRect(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    v6 = 0LL;
    v7 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    if ( !*(_QWORD *)(v7 + 496) )
      goto LABEL_10;
    v8 = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( v8 )
      v6 = *v8;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v6 + 496) + 8LL) + 64LL) & 1) == 0 )
LABEL_10:
      CurrentThreadDpiAwarenessContext = 18;
  }
  GetMonitorRectForDpi(a1, a2, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
  return a1;
}
