/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14009119C
 * Callers:
 *     _GetClientRect @ 0x14004BA3C (_GetClientRect.c)
 *     _GetWindowPlacement @ 0x1400904B8 (_GetWindowPlacement.c)
 *     GetMonitorWorkRect @ 0x140090FBC (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     GetMonitorMenuRect @ 0x140159A1C (GetMonitorMenuRect.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 *     xxxSendSizeMessage @ 0x1401A8EA0 (xxxSendSizeMessage.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401EE244 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x140200ED0 (xxxDesktopPaintCallback.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1402098C0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140269844 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpiContext(__int64 a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v3 = CurrentThreadDpiAwarenessContext;
  v4 = CurrentThreadDpiAwarenessContext;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
  {
    LOBYTE(v3) = CurrentThreadDpiAwarenessContext & 0xF;
    if ( !*((_QWORD *)PtiCurrent(v3, v2) + 62)
      || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v7, v6) + 62) + 8LL) + 64LL) & 1) == 0 )
    {
      return 18;
    }
  }
  return v4;
}
