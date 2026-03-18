/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x140090E74
 * Callers:
 *     _GetPointerDeviceRects @ 0x140090CA4 (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1401E3F10 (_GetMouseMovePointsEx.c)
 *     GetScreenRect @ 0x14022EE5C (GetScreenRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140269844 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     GetHimetricScaleForMonitor @ 0x1402842C0 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int16 v3; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v3
    && (!*((_QWORD *)PtiCurrent(v2, v1) + 62)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v6, v5) + 62) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v3;
}
