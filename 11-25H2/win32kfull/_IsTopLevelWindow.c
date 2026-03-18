/*
 * XREFs of _IsTopLevelWindow @ 0x140037CA0
 * Callers:
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400232D8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140034FB4 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserIsTopLevelWindow @ 0x140036AB0 (NtUserIsTopLevelWindow.c)
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x140036C14 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x140036CCC (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     GetInheritedMonitor @ 0x140036E20 (GetInheritedMonitor.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1400381B0 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x14004F6C8 (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     FVisCountable @ 0x140058720 (FVisCountable.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x140064C08 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     InitializeMonitorInfo @ 0x1400901C8 (InitializeMonitorInfo.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14014C01C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014ED28 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014EEC8 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401969A0 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x1401972D4 (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x14019C584 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1401A44D0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401A924C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     xxxConsoleControl @ 0x1401B62A0 (xxxConsoleControl.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401BAD30 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     GetGestureConfigSettings @ 0x1401BE040 (GetGestureConfigSettings.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1401CB9C0 (NtUserGetWindowDisplayAffinity.c)
 *     GetDisplayAffinity @ 0x1401CBA70 (GetDisplayAffinity.c)
 *     ShouldHaveShadow @ 0x1401D159C (ShouldHaveShadow.c)
 *     FeedbackGetWindowSetting @ 0x1401D21D0 (FeedbackGetWindowSetting.c)
 *     NtUserSetWindowCompositionTransition @ 0x1401E65E0 (NtUserSetWindowCompositionTransition.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401E6A50 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     NtUserBeginLayoutUpdate @ 0x1401E9650 (NtUserBeginLayoutUpdate.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401EFF20 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     NtUserSetBrokeredForeground @ 0x140221650 (NtUserSetBrokeredForeground.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1402295F0 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x14022EAA8 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1402405D0 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x140257214 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14025C124 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x14025CD28 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1402840C4 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140284CA8 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x14029336C (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 *     NtUserApplyWindowAction @ 0x1402945A0 (NtUserApplyWindowAction.c)
 *     NtUserConvertToInterceptWindow @ 0x140294EB0 (NtUserConvertToInterceptWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x140295530 (NtUserDisableImmersiveOwner.c)
 *     NtUserEnterMoveSizeLoop @ 0x140296290 (NtUserEnterMoveSizeLoop.c)
 *     NtUserForceWindowToDpiForTest @ 0x140296E90 (NtUserForceWindowToDpiForTest.c)
 *     NtUserGetWindowCompositionAttribute @ 0x140298E30 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserRegisterCloakedNotification @ 0x14029C740 (NtUserRegisterCloakedNotification.c)
 *     NtUserSetAdditionalPowerThrottlingProcess @ 0x14029DCA0 (NtUserSetAdditionalPowerThrottlingProcess.c)
 *     NtUserSetBridgeWindowChild @ 0x14029E030 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetShellSpecialWindow @ 0x1402A0150 (NtUserSetShellSpecialWindow.c)
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402A3000 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402AAC50 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402AEAA8 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B5DE8 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CE4F4 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D94B8 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        return v1 == *(_QWORD *)(v4 + 24);
    }
  }
  return result;
}
