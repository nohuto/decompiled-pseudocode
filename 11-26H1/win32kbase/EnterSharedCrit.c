/*
 * XREFs of EnterSharedCrit @ 0x14003D800
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x14003AEA0 (UserReleaseDC.c)
 *     NtUserGetKeyboardLayout @ 0x14003B800 (NtUserGetKeyboardLayout.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     NtUserReleaseDC @ 0x14003BF40 (NtUserReleaseDC.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserEnterUserCritSecShared @ 0x14003D7E0 (UserEnterUserCritSecShared.c)
 *     NtUserEnumDisplayDevices @ 0x1400463F0 (NtUserEnumDisplayDevices.c)
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x140059630 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14007DA94 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1400865B0 (NtUserGetProcessDpiAwarenessContext.c)
 *     DrvGetCurrentDpiInfo @ 0x1400877B0 (DrvGetCurrentDpiInfo.c)
 *     NtUserVkKeyScanEx @ 0x140087D30 (NtUserVkKeyScanEx.c)
 *     NtUserMapVirtualKeyEx @ 0x140088120 (NtUserMapVirtualKeyEx.c)
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x1400C7220 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1400FA930 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x140136490 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013B978 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserGetKeyboardType @ 0x140158DA0 (NtUserGetKeyboardType.c)
 *     NtUserGetSystemDpiForProcess @ 0x140178C60 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x140190990 (NtUserIsMouseInPointerEnabled.c)
 *     NtMITGetCursorUpdateHandle @ 0x14019C080 (NtMITGetCursorUpdateHandle.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 *     NtUserEnumDisplaySettings @ 0x1401AB540 (NtUserEnumDisplaySettings.c)
 *     UserGetWindowThreadProcessId @ 0x1401B5098 (UserGetWindowThreadProcessId.c)
 *     NtMITSetLastInputRecipient @ 0x1401E1610 (NtMITSetLastInputRecipient.c)
 *     NtUserCheckProcessSession @ 0x1401E2390 (NtUserCheckProcessSession.c)
 *     NtUserGetDoubleClickTime @ 0x1401E41B0 (NtUserGetDoubleClickTime.c)
 *     NtUserGetKeyboardInputThreadId @ 0x1401E49A0 (NtUserGetKeyboardInputThreadId.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1401E49E0 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     W32pLkmdDataCollectionCallback @ 0x1401ECA50 (W32pLkmdDataCollectionCallback.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401F9AE0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EDE0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021F4D0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall EnterSharedCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 UserSessionState; // rax

  v4 = a2;
  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3, a4);
  return UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           v5,
           v4,
           lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_);
}
