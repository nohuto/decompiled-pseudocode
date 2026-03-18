/*
 * XREFs of UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14006A6A0 (UserSessionSwitchEnterCrit.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1400BF9C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0MaybeEnterLeaveCrit@@QEAA@_N@Z @ 0x1400E4F64 (--0MaybeEnterLeaveCrit@@QEAA@_N@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB380 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1400EC7B0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     HandleMITWakeSignal @ 0x1400F06E8 (HandleMITWakeSignal.c)
 *     UserEnterUserCritSec @ 0x1400F85F0 (UserEnterUserCritSec.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400FFC4C (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserSetInputServiceState @ 0x140111350 (NtUserSetInputServiceState.c)
 *     VideoPortCallout @ 0x1401241D0 (VideoPortCallout.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140128F30 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14012D130 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14013676C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserInjectDeviceInput @ 0x14013AF50 (NtUserInjectDeviceInput.c)
 *     NtRIMOnPnpNotification @ 0x14013BD70 (NtRIMOnPnpNotification.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x14014AFE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014D7E0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     NtSetShellCursorState @ 0x140152480 (NtSetShellCursorState.c)
 *     EnterCrit @ 0x140167400 (EnterCrit.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     UserThreadCallout @ 0x14016AE90 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     NtUserInjectKeyboardInput @ 0x140171970 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x140172360 (NtUserInjectMouseInput.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     NtUserRemoveInjectionDevice @ 0x14019B810 (NtUserRemoveInjectionDevice.c)
 *     ProcessFreezeChangeNotify @ 0x1401A7350 (ProcessFreezeChangeNotify.c)
 *     InitSystemThread @ 0x1401AA850 (InitSystemThread.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8 (-AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C (-Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B62C0 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1401BFA20 (NtUserSetFeatureReportResponse.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A1F0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A380 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall UserCritInternal::_anonymous_namespace_::IsValidGuiContext(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  char v2; // cl
  char result; // al

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x1000000) == 0 )
    return 0;
  if ( *(char *)(a1 + 1360) < 0 )
    return 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 0;
  if ( !*(_QWORD *)CurrentProcessWin32Process )
    return 0;
  v2 = *(_BYTE *)(CurrentProcessWin32Process + 1176);
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}
