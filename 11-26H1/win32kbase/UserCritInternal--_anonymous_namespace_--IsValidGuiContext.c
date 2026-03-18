/*
 * XREFs of UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC
 * Callers:
 *     UserSessionSwitchEnterCrit @ 0x14000A1D0 (UserSessionSwitchEnterCrit.c)
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     VideoPortCallout @ 0x140091F00 (VideoPortCallout.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1400A361C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400D5268 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x140118E90 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x140136490 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     UserEnterUserCritSec @ 0x140141890 (UserEnterUserCritSec.c)
 *     ProcessFreezeChangeNotify @ 0x14014C310 (ProcessFreezeChangeNotify.c)
 *     NtUserSetInputServiceState @ 0x140154100 (NtUserSetInputServiceState.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14015F6F4 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140166D50 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14016B110 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14016C2F0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     NtRIMOnPnpNotification @ 0x14017A0F0 (NtRIMOnPnpNotification.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140186F40 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14018CE58 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     EnterCrit @ 0x1401A8600 (EnterCrit.c)
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     InitSystemThread @ 0x1401B5410 (InitSystemThread.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserRemoveInjectionDevice @ 0x1401B83E0 (NtUserRemoveInjectionDevice.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401CEE80 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall UserCritInternal::_anonymous_namespace_::IsValidGuiContext(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  char v2; // cl
  char result; // al

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x1000000) == 0 )
    return 0;
  if ( *(char *)(a1 + 1360) < 0 )
    return 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 0;
  if ( !*(_QWORD *)CurrentProcessWin32Process )
    return 0;
  v2 = *(_BYTE *)(CurrentProcessWin32Process + 1200);
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}
