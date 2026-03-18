/*
 * XREFs of ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401A924C
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1401A91C0 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
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
