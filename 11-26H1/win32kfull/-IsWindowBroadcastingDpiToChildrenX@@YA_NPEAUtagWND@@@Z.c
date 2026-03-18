/*
 * XREFs of ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4
 * Callers:
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1401D7740 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

char __fastcall IsWindowBroadcastingDpiToChildrenX(struct tagWND *a1)
{
  char v1; // r9
  int v2; // edx
  __int64 v4; // r10

  v1 = 0;
  v2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v2 == 3 || v2 == 2 && IsTopLevelWindow((__int64)a1) && (*(_DWORD *)(v4 + 380) & 0x100000) != 0 )
    return 1;
  return v1;
}
