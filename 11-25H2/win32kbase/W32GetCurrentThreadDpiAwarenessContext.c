/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     GetCurrentThreadCompositedDpi @ 0x140040DF8 (GetCurrentThreadCompositedDpi.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     NtUserGetClipCursor @ 0x140063870 (NtUserGetClipCursor.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1400639E0 (TransformPointBetweenCoordinateSpaces.c)
 *     GetMonitorRect @ 0x140063BC4 (GetMonitorRect.c)
 *     PhysicalToLogicalDPIRect @ 0x140063C70 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x140063F60 (LogicalToPhysicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x140064490 (LogicalToPhysicalDPIRect.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x140088FE8 (-vMakeIso@DC@@QEAAXXZ.c)
 *     NtUserGetDpiForMonitor @ 0x140089500 (NtUserGetDpiForMonitor.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x140105920 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14012C800 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14012D2D4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x14014527C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     UserIsCurrentThreadGdiScaled @ 0x140176F90 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x140190098 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x140042C30 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  if ( !CurrentThreadNonPaged )
    return 18LL;
  v1 = *CurrentThreadNonPaged;
  if ( !*CurrentThreadNonPaged )
    return 18LL;
  if ( *(_QWORD *)(v1 + 408) )
    CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
  result = *(unsigned int *)(v1 + 400);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 268);
    return 18LL;
  }
  return result;
}
