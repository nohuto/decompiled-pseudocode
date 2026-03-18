/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140030420
 * Callers:
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     _GetWindowPlacement @ 0x140030188 (_GetWindowPlacement.c)
 *     GetMonitorWorkRect @ 0x1400307D4 (GetMonitorWorkRect.c)
 *     GetMonitorMenuRect @ 0x140176008 (GetMonitorMenuRect.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1401767D0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1401D198C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     xxxSendSizeMessage @ 0x1401D8A40 (xxxSendSizeMessage.c)
 *     _GetClientRect @ 0x1401E6B9C (_GetClientRect.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401FC428 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 *     GetHimetricScaleForMonitor @ 0x140260D78 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 GetCurrentThreadCompositedDpiContext(void)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*((_QWORD *)PtiCurrent() + 61)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 61) + 8LL) + 64LL) & 1) == 0) )
  {
    return 18;
  }
  return CurrentThreadDpiAwarenessContext;
}
