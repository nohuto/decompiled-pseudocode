/*
 * XREFs of UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540
 * Callers:
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14002A15C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     NtUserGetPointerDeviceOrientation @ 0x14003B7F0 (NtUserGetPointerDeviceOrientation.c)
 *     ReferenceDwmApiPort @ 0x14003F9B0 (ReferenceDwmApiPort.c)
 *     NtUserReleaseDC @ 0x1400474E0 (NtUserReleaseDC.c)
 *     ??1MaybeEnterLeaveCrit@@QEAA@XZ @ 0x140047520 (--1MaybeEnterLeaveCrit@@QEAA@XZ.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140047A1C (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140047BB4 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     NtUserEnumDisplayDevices @ 0x140047D40 (NtUserEnumDisplayDevices.c)
 *     NtUserGetKeyboardLayout @ 0x140048D00 (NtUserGetKeyboardLayout.c)
 *     NtUserEnumDisplaySettings @ 0x14004BC10 (NtUserEnumDisplaySettings.c)
 *     NtUserEnumDisplayMonitors @ 0x14004D210 (NtUserEnumDisplayMonitors.c)
 *     NtUserGetKeyboardState @ 0x140060B00 (NtUserGetKeyboardState.c)
 *     NtUserGetClipCursor @ 0x140063870 (NtUserGetClipCursor.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14006A610 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x14006A670 (AcquireCriticalSectionAndCheckState.c)
 *     UserSessionSwitchEnterCrit @ 0x14006A6A0 (UserSessionSwitchEnterCrit.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     NtUserGetDpiForMonitor @ 0x140089500 (NtUserGetDpiForMonitor.c)
 *     DrvGetCurrentDpiInfo @ 0x14008A19C (DrvGetCurrentDpiInfo.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     NtUserVkKeyScanEx @ 0x14009EED0 (NtUserVkKeyScanEx.c)
 *     NtUserMapVirtualKeyEx @ 0x14009F250 (NtUserMapVirtualKeyEx.c)
 *     NtMITGetCursorUpdateHandle @ 0x1400BD110 (NtMITGetCursorUpdateHandle.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1400BF9C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     NtUserGetUniformSpaceMapping @ 0x1400CDAB0 (NtUserGetUniformSpaceMapping.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB380 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     HandleMITWakeSignal @ 0x1400F06E8 (HandleMITWakeSignal.c)
 *     UserReleaseDC @ 0x1400F4E50 (UserReleaseDC.c)
 *     NtUserCitSetInfo @ 0x1400FEE90 (NtUserCitSetInfo.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400FFC4C (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401048D0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x140105920 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserClipCursor @ 0x140107790 (NtUserClipCursor.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x140107FE0 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtUserGetDoubleClickTime @ 0x14010C7C0 (NtUserGetDoubleClickTime.c)
 *     NtUserGetKeyboardLayoutList @ 0x140110360 (NtUserGetKeyboardLayoutList.c)
 *     NtUserSetInputServiceState @ 0x140111350 (NtUserSetInputServiceState.c)
 *     NtUserLockCursor @ 0x14011D610 (NtUserLockCursor.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1401212A8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtUserDownlevelTouchpad @ 0x1401220D0 (NtUserDownlevelTouchpad.c)
 *     NtMITUpdateInputGlobals @ 0x140123D00 (NtMITUpdateInputGlobals.c)
 *     VideoPortCallout @ 0x1401241D0 (VideoPortCallout.c)
 *     NtUserGetKeyboardType @ 0x140125E70 (NtUserGetKeyboardType.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140128F30 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?DxgkEngReleaseWin32kLocks@@YAXXZ @ 0x14012D0B0 (-DxgkEngReleaseWin32kLocks@@YAXXZ.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14012D130 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserCreateActivationObject @ 0x14012ED30 (NtUserCreateActivationObject.c)
 *     NtUserCreateSystemThreads @ 0x140133580 (NtUserCreateSystemThreads.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14013676C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x140139DE0 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtUserEnableMouseInPointer @ 0x14013A400 (NtUserEnableMouseInPointer.c)
 *     NtUserConfigureActivationObject @ 0x14013ABD0 (NtUserConfigureActivationObject.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     NtRIMOnPnpNotification @ 0x14013BD70 (NtRIMOnPnpNotification.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     NtUserGetSystemDpiForProcess @ 0x140146FE0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserSetKeyboardState @ 0x140147150 (NtUserSetKeyboardState.c)
 *     NtUserRegisterLogonProcess @ 0x140147CB0 (NtUserRegisterLogonProcess.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x14014AFE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserDestroyActivationObject @ 0x14014B970 (NtUserDestroyActivationObject.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014D7E0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1401523C0 (NtUserIsMouseInPointerEnabled.c)
 *     NtSetShellCursorState @ 0x140152480 (NtSetShellCursorState.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x140153500 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x140158A00 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtUserRegisterSessionPort @ 0x140159960 (NtUserRegisterSessionPort.c)
 *     NtUserRegisterTouchPadCapable @ 0x14015C7F0 (NtUserRegisterTouchPadCapable.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     UserThreadCallout @ 0x14016AE90 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     NtMITActivateInputProcessing @ 0x14016E560 (NtMITActivateInputProcessing.c)
 *     NtMITSetInputDelegationMode @ 0x14016E740 (NtMITSetInputDelegationMode.c)
 *     NtUserActivateKeyboardLayout @ 0x14016E970 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 *     NtUserCheckProcessSession @ 0x14016ECA0 (NtUserCheckProcessSession.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x14016F770 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 *     NtUserGetInputLocaleInfo @ 0x1401701F0 (NtUserGetInputLocaleInfo.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     NtUserGetPointerCursorId @ 0x140170930 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameTimes @ 0x1401709F0 (NtUserGetPointerFrameTimes.c)
 *     NtUserGetPointerInfoList @ 0x140170AE0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x140170EA0 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerProprietaryId @ 0x140170FB0 (NtUserGetPointerProprietaryId.c)
 *     NtUserGetPointerType @ 0x140171080 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x140171150 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x140171340 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     NtUserRegisterManipulationThread @ 0x140173100 (NtUserRegisterManipulationThread.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     NtUserSetManipulationInputTarget @ 0x140174C80 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 *     NtUserToUnicodeEx @ 0x140176C30 (NtUserToUnicodeEx.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     UserGetWindowThreadProcessId @ 0x14019B1B0 (UserGetWindowThreadProcessId.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ProcessFreezeChangeNotify @ 0x1401A7350 (ProcessFreezeChangeNotify.c)
 *     UserProcessTimerDelayCallout @ 0x1401A750C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401A76B0 (UserProcessTimerStatisticsCallout.c)
 *     InitSystemThread @ 0x1401AA850 (InitSystemThread.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8 (-AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C (-Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     NtMapVisualRelativePoints @ 0x1401AE6E0 (NtMapVisualRelativePoints.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B62C0 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 *     NtConfigureInputSpace @ 0x1401B9DA0 (NtConfigureInputSpace.c)
 *     NtKSTInitialize @ 0x1401BA280 (NtKSTInitialize.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401BA3D0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401BA4F0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401BA740 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401BA850 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401BA980 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1401BAAD0 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1401BAD40 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1401BAEA0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401BB050 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401BB1F0 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputCallbacks @ 0x1401BB3A0 (NtMITSetInputCallbacks.c)
 *     NtMITSetLastInputRecipient @ 0x1401BB550 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401BB800 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1401BB9D0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1401BBB70 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401BBD50 (NtSetPointerDeviceInputSpace.c)
 *     NtUserCreateBaseWindow @ 0x1401BC060 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1401BC1D0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BD1E0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1401BD300 (NtUserEnableTouchPad.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BD4C0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetInputContainerId @ 0x1401BD5F0 (NtUserGetInputContainerId.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401BD890 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1401BD920 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BDD90 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1401BEF40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BF660 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BFA20 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1401BFEA0 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1401C0B10 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1401C1050 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401C1180 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1401C12B0 (NtUserUnregisterSessionPort.c)
 *     W32pLkmdDataCollectionCallback @ 0x1401C39A0 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiGetCertificate @ 0x1401C9760 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1401C98B0 (NtGdiGetCertificateSize.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401D0420 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401D7E80 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1401D80C0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1401D8690 (NtRIMUnregisterForInput.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A1F0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A380 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A480 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021AB60 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021AC00 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x14021B528 (IVWorkerThread.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1401616B8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall UserSessionSwitchLeaveCritWithNonPaged(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  LONG v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _DWORD *CurrentThreadWin32Thread; // rbx
  void (*v10)(void); // rax
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rsi
  void (*v15)(void); // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState;
  v5 = *(_DWORD *)(UserSessionState + 68880);
  if ( v5 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 68872), 0, v5, 0);
    *(_DWORD *)(v4 + 68880) = 0;
  }
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = W32GetUserSessionState(v7, v6);
    CurrentThreadWin32Thread = (_DWORD *)PsGetCurrentThreadWin32Thread();
    if ( (CurrentThreadWin32Thread[6] & 0x18) == 0x10 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3968LL);
      if ( v10 )
        v10();
      *(_DWORD *)(v8 + 19788) = 0;
      *(_QWORD *)(v8 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v8 + 19688);
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    if ( *(_QWORD *)CurrentThreadWin32Thread && (CurrentThreadWin32Thread[6] & 2) == 0 )
      *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1708LL) = 0;
    v11 = PsGetCurrentThreadWin32Thread();
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 28);
      if ( v12 )
        KeBugCheckEx(0x160u, v12, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    v13 = CurrentThreadWin32Thread[6] & 0xFFFFFFE5;
    CurrentThreadWin32Thread[6] = v13;
    if ( (v13 & 0x20) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)v8, CurrentThreadWin32Thread + 8);
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = W32GetUserSessionState(v7, v6);
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() == 2 )
    {
      v15 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3968LL);
      if ( v15 )
        v15();
      if ( *(_DWORD *)(v14 + 19788) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1452LL);
      if ( *(_QWORD *)(v14 + 19768) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1460LL);
      if ( *(_DWORD *)(v14 + 19780) > *(_DWORD *)(v14 + 19776) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
      *(_DWORD *)(v14 + 19788) = 0;
      *(_QWORD *)(v14 + 19768) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v14 + 19688);
      if ( *(_QWORD *)(v14 + 24) )
      {
        v16 = (_QWORD *)PsGetCurrentThreadWin32Thread();
        if ( v16 )
        {
          if ( *v16 )
            *(_BYTE *)(*(_QWORD *)(v14 + 24) + 1708LL) = 0;
        }
      }
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    v17 = PsGetCurrentThreadWin32Thread();
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 + 28);
      if ( v18 )
        KeBugCheckEx(0x160u, v18, 0LL, 0LL, 0LL);
    }
    EtwTraceReleaseUserCrit();
    if ( !v2 )
      v2 = PsGetCurrentThreadWin32Thread();
    ExReleaseFastResource(*(_QWORD *)v14, v2 + 32);
    *(_DWORD *)(v2 + 24) &= ~4u;
    KeLeaveCriticalRegion();
  }
}
