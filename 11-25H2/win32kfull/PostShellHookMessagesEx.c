/*
 * XREFs of PostShellHookMessagesEx @ 0x1400216D0
 * Callers:
 *     EditionPostShellHookMessages @ 0x140021AD0 (EditionPostShellHookMessages.c)
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x140023234 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     xxxSetInformationThread @ 0x140114240 (xxxSetInformationThread.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     RemoveWindowFullScreen @ 0x14021536C (RemoveWindowFullScreen.c)
 *     xxxRedrawFrameAndHook @ 0x14021EE48 (xxxRedrawFrameAndHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x140225D60 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14025D7D0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140272D80 (-RotationLockTogglePressed@CRotationMgr@@UEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ @ 0x1402730A0 (-xxxRestoreSlateAutorotationPreferences@CRotationMgr@@UEAAXXZ.c)
 *     ?PTPEnableHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140275C50 (-PTPEnableHotkeyCallback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?WinlogonWinSpaceCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140275FF0 (-WinlogonWinSpaceCallback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400212A8 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall PostShellHookMessagesEx(LastWokenThread *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rax
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v2 = (unsigned int)a1;
  if ( (_DWORD)a1 == 12 )
  {
    v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        14,
        (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids);
    }
    LastWokenThread::Clear(a1);
  }
  v4 = W32GetUserSessionState(a1, a2);
  _PostShellHookMsgWorker(*(_DWORD *)(*(_QWORD *)(v4 + 19872) + 928LL), v2, a2, 0LL);
}
