/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C
 * Callers:
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14003D8E0 (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14003D904 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxCsDdeInitialize @ 0x14017DC44 (xxxCsDdeInitialize.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     NtUserSetSystemMenu @ 0x14021ECA0 (NtUserSetSystemMenu.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1402402D4 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     xxxDDETrackPostHook @ 0x140255D80 (xxxDDETrackPostHook.c)
 *     NtUserHiliteMenuItem @ 0x140299C40 (NtUserHiliteMenuItem.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D2C50 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(
        _QWORD *BugCheckParameter3,
        __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  v3 = PtiCurrent((__int64)BugCheckParameter3, a2);
  return Win32HM_UnlockFromThread<0>((ULONG_PTR)v3, BugCheckParameter3);
}
