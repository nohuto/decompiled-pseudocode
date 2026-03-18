/*
 * XREFs of ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A8174
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A948C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402AA42C (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C24A8 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 */

void __fastcall AdvancedWindowPos::CWindowAction::SetMonitor(
        AdvancedWindowPos::CWindowAction *this,
        struct tagMONITOR *a2,
        char a3,
        const struct tagWND *a4)
{
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 && (*((_DWORD *)this + 1) & 0x400) != 0 )
    v6 = *(_OWORD *)GetMonitorRectForWindow((__int64)&v7, (__int64)a2, a4);
  else
    v6 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 28LL);
  v7 = v6;
  if ( a3 )
    *(_DWORD *)this |= 0x100u;
  else
    *((_DWORD *)this + 1) |= 0x200u;
  *(_QWORD *)((char *)this + 100) = v6;
}
