/*
 * XREFs of ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A803C (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A948C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402AA42C (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C24A8 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
        CThreadLockedCurrentMonitorTopologyPtr *this,
        __int64 a2)
{
  if ( *(_QWORD *)this )
    *((_QWORD *)PtiCurrent((__int64)this, a2) + 48) = *((_QWORD *)this + 1);
  CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr((CMonitorTopology **)this);
}
