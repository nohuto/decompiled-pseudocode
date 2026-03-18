/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174
 * Callers:
 *     xxxCalcMenuBar @ 0x140009E50 (xxxCalcMenuBar.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14002A280 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140154D14 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     NtUserEnableMenuItem @ 0x140203FC0 (NtUserEnableMenuItem.c)
 *     xxxPaintMenuBar @ 0x14020C128 (xxxPaintMenuBar.c)
 *     NtUserMenuItemFromPoint @ 0x14020CFD0 (NtUserMenuItemFromPoint.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14023B12C (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 *     NtUserSetSystemMenu @ 0x140255BB0 (NtUserSetSystemMenu.c)
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 *     NtUserHiliteMenuItem @ 0x1402B6200 (NtUserHiliteMenuItem.c)
 *     ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402E5C74 (-xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@P.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E6284 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(_QWORD *BugCheckParameter3)
{
  struct tagTHREADINFO *v2; // rax
  _QWORD *v3; // rcx

  v2 = PtiCurrent();
  v3 = (_QWORD *)*((_QWORD *)v2 + 56);
  if ( v3 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, (ULONG_PTR)v2, (ULONG_PTR)BugCheckParameter3, 0LL);
  *((_QWORD *)v2 + 56) = *v3;
  return HMUnlockObject(v3[1]);
}
