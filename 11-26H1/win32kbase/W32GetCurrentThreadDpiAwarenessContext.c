/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x140085350
 * Callers:
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400388B4 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14003CB60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     LogicalToPhysicalDPIRect @ 0x140082A40 (LogicalToPhysicalDPIRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x140083490 (TransformPointBetweenCoordinateSpaces.c)
 *     LogicalToPhysicalDPIPoint @ 0x140083540 (LogicalToPhysicalDPIPoint.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x140083B38 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetCurrentThreadCompositedDpi @ 0x140083D64 (GetCurrentThreadCompositedDpi.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1400865B0 (NtUserGetProcessDpiAwarenessContext.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140168F9C (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14016AF74 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1401805B0 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     NtUserClipCursor @ 0x1401E2460 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1401EA770 (UserIsCurrentThreadGdiScaled.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1, __int64 a2)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( !CurrentThreadWin32Thread )
    return 18LL;
  v4 = *CurrentThreadWin32Thread;
  if ( !*CurrentThreadWin32Thread )
    return 18LL;
  if ( *(_QWORD *)(v4 + 400) )
    CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadWin32Thread);
  result = *(unsigned int *)(v4 + 392);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 268);
    return 18LL;
  }
  return result;
}
