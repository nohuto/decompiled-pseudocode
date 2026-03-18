/*
 * XREFs of UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1400086E0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x140009580 (NtGdiCreateOPMProtectedOutput.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x140009730 (AcquireCriticalSectionAndCheckState.c)
 *     UserSessionSwitchEnterCrit @ 0x14000A1D0 (UserSessionSwitchEnterCrit.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x14000A770 (NtGdiCreateOPMProtectedOutputs.c)
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x14003AEA0 (UserReleaseDC.c)
 *     NtUserGetKeyboardLayout @ 0x14003B800 (NtUserGetKeyboardLayout.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     NtUserReleaseDC @ 0x14003BF40 (NtUserReleaseDC.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x14003D0E4 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x14003D2F0 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     NtUserEnumDisplayDevices @ 0x1400463F0 (NtUserEnumDisplayDevices.c)
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     NtUserGetPointerFrameTimes @ 0x140051220 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInputTransform @ 0x140053640 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 *     ?DxgkEngReleaseWin32kLocks@@YAXXZ @ 0x140055D70 (-DxgkEngReleaseWin32kLocks@@YAXXZ.c)
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x140059630 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DB18 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     NtUserGetClipCursor @ 0x140082750 (NtUserGetClipCursor.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1400865B0 (NtUserGetProcessDpiAwarenessContext.c)
 *     DrvGetCurrentDpiInfo @ 0x1400877B0 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetPointerType @ 0x140087BC0 (NtUserGetPointerType.c)
 *     NtUserVkKeyScanEx @ 0x140087D30 (NtUserVkKeyScanEx.c)
 *     NtUserMapVirtualKeyEx @ 0x140088120 (NtUserMapVirtualKeyEx.c)
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     VideoPortCallout @ 0x140091F00 (VideoPortCallout.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1400A361C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400D5268 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1401113F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x140118E90 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     NtUserGetKeyboardLayoutList @ 0x14011C350 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetUniformSpaceMapping @ 0x14011D250 (NtUserGetUniformSpaceMapping.c)
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x140134450 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013B978 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserCitSetInfo @ 0x1401441C0 (NtUserCitSetInfo.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x140149330 (NtUserSetProcessDpiAwarenessContext.c)
 *     ProcessFreezeChangeNotify @ 0x14014C310 (ProcessFreezeChangeNotify.c)
 *     NtUserSetInputServiceState @ 0x140154100 (NtUserSetInputServiceState.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140156800 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetKeyboardType @ 0x140158DA0 (NtUserGetKeyboardType.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14015F6F4 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     NtUserGetPointerProprietaryId @ 0x1401616B0 (NtUserGetPointerProprietaryId.c)
 *     NtUserDownlevelTouchpad @ 0x140161B60 (NtUserDownlevelTouchpad.c)
 *     NtMITUpdateInputGlobals @ 0x140163340 (NtMITUpdateInputGlobals.c)
 *     NtUserGetInputLocaleInfo @ 0x140164250 (NtUserGetInputLocaleInfo.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140166D50 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14016B110 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14016C2F0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x14016CE40 (NtUserLoadKeyboardLayoutEx.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140172218 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserCreateSystemThreads @ 0x140173E20 (NtUserCreateSystemThreads.c)
 *     NtUserEnableMouseInPointer @ 0x140177A70 (NtUserEnableMouseInPointer.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     NtUserGetSystemDpiForProcess @ 0x140178C60 (NtUserGetSystemDpiForProcess.c)
 *     NtRIMOnPnpNotification @ 0x14017A0F0 (NtRIMOnPnpNotification.c)
 *     NtUserGetDpiForMonitor @ 0x14017AFC0 (NtUserGetDpiForMonitor.c)
 *     NtUserSetKeyboardState @ 0x14017C0C0 (NtUserSetKeyboardState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x140181390 (DrvSetWddmDeviceMonitorPowerState.c)
 *     NtUserRegisterLogonProcess @ 0x1401845C0 (NtUserRegisterLogonProcess.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140186F40 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14018CE58 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     NtKSTInitialize @ 0x14018CFE0 (NtKSTInitialize.c)
 *     NtMITSetInputCallbacks @ 0x14018D750 (NtMITSetInputCallbacks.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     NtUserIsMouseInPointerEnabled @ 0x140190990 (NtUserIsMouseInPointerEnabled.c)
 *     NtUserRegisterSessionPort @ 0x140193A10 (NtUserRegisterSessionPort.c)
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     NtUserEnumDisplayMonitors @ 0x140199A90 (NtUserEnumDisplayMonitors.c)
 *     NtMITGetCursorUpdateHandle @ 0x14019C080 (NtMITGetCursorUpdateHandle.c)
 *     NtUserRegisterTouchPadCapable @ 0x1401A01A0 (NtUserRegisterTouchPadCapable.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     UserGetWindowThreadProcessId @ 0x1401B5098 (UserGetWindowThreadProcessId.c)
 *     InitSystemThread @ 0x1401B5410 (InitSystemThread.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserRemoveInjectionDevice @ 0x1401B83E0 (NtUserRemoveInjectionDevice.c)
 *     NtMITSetInputDelegationMode @ 0x1401B9F60 (NtMITSetInputDelegationMode.c)
 *     UserDeleteW32Process @ 0x1401C0400 (UserDeleteW32Process.c)
 *     UserProcessTimerDelayCallout @ 0x1401CAD8C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401CAEB4 (UserProcessTimerStatisticsCallout.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401CEE80 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 *     NtMapVisualRelativePoints @ 0x1401D0840 (NtMapVisualRelativePoints.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401E0920 (NtMITAccessibilityTimerNotification.c)
 *     NtMITActivateInputProcessing @ 0x1401E09C0 (NtMITActivateInputProcessing.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401E0B60 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401E0D10 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401E0DB0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401E0E70 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1401E0F40 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1401E1140 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1401E1210 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401E1340 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401E1450 (NtMITPostWindowEventMessage.c)
 *     NtMITSetLastInputRecipient @ 0x1401E1610 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1401E1680 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401E1820 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1401E1950 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1401E1A70 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401E1B80 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1401E1D00 (NtSetShellCursorState.c)
 *     NtUserActivateKeyboardLayout @ 0x1401E1FF0 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     NtUserClipCursor @ 0x1401E2460 (NtUserClipCursor.c)
 *     NtUserCreateBaseWindow @ 0x1401E26A0 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1401E2810 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401E3860 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1401E3C50 (NtUserEnableTouchPad.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1401E3DB0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetDoubleClickTime @ 0x1401E41B0 (NtUserGetDoubleClickTime.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401E4270 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 *     NtUserGetKeyboardInputThreadId @ 0x1401E49A0 (NtUserGetKeyboardInputThreadId.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401E49E0 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetPointerCursorId @ 0x1401E4AF0 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401E4C50 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetRawPointerDeviceData @ 0x1401E4D40 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     NtUserLockCursor @ 0x1401E7A00 (NtUserLockCursor.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401E7FB0 (NtUserPostKeyboardInputMessage.c)
 *     NtUserRegisterManipulationThread @ 0x1401E8180 (NtUserRegisterManipulationThread.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1401E89E0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1401E9950 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 *     NtUserStopAndEndInertia @ 0x1401E9D80 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401E9E40 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1401E9F00 (NtUserUnregisterSessionPort.c)
 *     W32pLkmdDataCollectionCallback @ 0x1401ECA50 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiGetCertificate @ 0x1401F4440 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1401F4590 (NtGdiGetCertificateSize.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401F80B0 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401F9AE0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401FF040 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1401FF210 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1401FF730 (NtRIMUnregisterForInput.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EB50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021ECE0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EDE0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021F4D0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021F560 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x14021F9FC (IVWorkerThread.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14001F3E0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall UserSessionSwitchLeaveCritWithNonPaged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v15; // rcx
  void (*v16)(void); // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ecx

  UserSessionState = W32GetUserSessionState(a1, a2, a3, a4);
  v8 = UserSessionState;
  v9 = *(unsigned int *)(UserSessionState + 68872);
  if ( (_DWORD)v9 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 68864), 0, v9, 0);
    *(_DWORD *)(v8 + 68872) = 0;
  }
  v10 = W32GetUserSessionState(v6, v5, v9, v7);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12, v11);
  v15 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
  LOBYTE(v15) = v15 & 0xC;
  if ( (_BYTE)v15 == 8 )
  {
    v16 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 48) + 3520LL);
    if ( v16 )
      v16();
    *(_DWORD *)(v10 + 19820) = 0;
    *(_QWORD *)(v10 + 19800) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
    *(_QWORD *)(v10 + 24) = 0LL;
  }
  v17 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
    *(_BYTE *)(v17 + 1708) = 0;
  v18 = PsGetCurrentThreadWin32Thread(v17, v13);
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 + 28);
    if ( v19 )
      KeBugCheckEx(0x160u, v19, 0LL, 0LL, 0LL);
  }
  EtwTraceReleaseUserCrit();
  *(_DWORD *)(CurrentThreadWin32Thread + 24) &= 0xFFFFFFF1;
  if ( (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)v10, CurrentThreadWin32Thread + 32);
  KeLeaveCriticalRegion();
}
