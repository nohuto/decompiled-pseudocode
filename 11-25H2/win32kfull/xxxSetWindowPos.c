/*
 * XREFs of xxxSetWindowPos @ 0x14004CAF4
 * Callers:
 *     NtUserMoveWindow @ 0x14004C540 (NtUserMoveWindow.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x14004DD24 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     xxxMetricsRecalc @ 0x140147B70 (xxxMetricsRecalc.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxShowScrollBar @ 0x1401D4208 (xxxShowScrollBar.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401E6A50 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1401EB2CC (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxSetMenu @ 0x1401FBD50 (xxxSetMenu.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x140205018 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020F2CC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxUpdateShadowZorder @ 0x1402180E4 (xxxUpdateShadowZorder.c)
 *     xxxRedrawFrameAndHook @ 0x14021EE48 (xxxRedrawFrameAndHook.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z @ 0x14023CE88 (-xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDrawMenuBar @ 0x140248980 (NtUserDrawMenuBar.c)
 *     NtUserRedrawFrame @ 0x14024C030 (NtUserRedrawFrame.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14025542C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     xxxActivateEnabledPopup @ 0x14026E024 (xxxActivateEnabledPopup.c)
 *     ?xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140279CB8 (-xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027CB28 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x140284044 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     NtUserRaiseLowerShellWindow @ 0x14029BDD0 (NtUserRaiseLowerShellWindow.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402ACC4C (xxxSetInternalWindowPos.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C3448 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C9B7C (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14002160C (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPosAndBand @ 0x140236EBC (xxxSetWindowPosAndBand.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  bool v8; // di
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct tagWND *CompositeAppFrameWindow; // rax
  struct tagWND *v18; // rsi
  int v19; // edi
  __int64 v20; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = !a2 && (unsigned int)CoreWindowProp::IsComponent(a1, 0LL) && (a7 & 0xFFFFFFEF) == 3;
  v9 = a7 | 0x60400;
  if ( !v8 )
    v9 = a7;
  v10 = xxxSetWindowPosAndBand(a1, a5, a6, v9);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v12, v11, v13) )
  {
    if ( v10 )
    {
      if ( v8 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) == *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888) )
      {
        CompositeAppFrameWindow = CoreWindowProp::GetCompositeAppFrameWindow(a1, v16);
        v18 = CompositeAppFrameWindow;
        if ( CompositeAppFrameWindow )
        {
          v19 = 394259;
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
            BugCheckParameter3,
            (__int64)CompositeAppFrameWindow);
          if ( (*(_BYTE *)(*((_QWORD *)v18 + 5) + 24LL) & 8) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
            v19 = 2491411;
          xxxSetWindowPosAndBand(v18, 0, 0, v19);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v20);
        }
      }
    }
  }
  return v10;
}
