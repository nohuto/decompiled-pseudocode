/*
 * XREFs of ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68
 * Callers:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     _SetLayeredWindowAttributes @ 0x1400E1004 (_SetLayeredWindowAttributes.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x14018F204 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14022E770 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     zzzAnimateFade @ 0x140242188 (zzzAnimateFade.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserNotifyProcessCreate @ 0x14024B6E0 (NtUserNotifyProcessCreate.c)
 *     NtUserRegisterForCustomDockTargets @ 0x14024C3D0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserRemoveProp @ 0x14024C800 (NtUserRemoveProp.c)
 *     NtUserSetActiveProcessForMonitor @ 0x14024D090 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserSetProp @ 0x14024DFD0 (NtUserSetProp.c)
 *     NtUserSetShellWindowEx @ 0x14024E320 (NtUserSetShellWindowEx.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 *     ?OnHideAppStartCursor@@YAXXZ @ 0x140273AF0 (-OnHideAppStartCursor@@YAXXZ.c)
 *     HideAutorunCursor @ 0x140273F80 (HideAutorunCursor.c)
 *     xxxClearForegroundThread @ 0x14027A390 (xxxClearForegroundThread.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027C900 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     zzzStartSonar @ 0x140287B4C (zzzStartSonar.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x14029314C (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x14029336C (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 *     ?_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z @ 0x140293B18 (-_NtUserGetSendMessageReceiver@@YAPEAUHWND__@@K@Z.c)
 *     NtUserCanCurrentThreadChangeForeground @ 0x140294B40 (NtUserCanCurrentThreadChangeForeground.c)
 *     NtUserClearForeground @ 0x140294CC0 (NtUserClearForeground.c)
 *     NtUserConvertToInterceptWindow @ 0x140294EB0 (NtUserConvertToInterceptWindow.c)
 *     NtUserDwmWindowNotificationsEnabled @ 0x140295F40 (NtUserDwmWindowNotificationsEnabled.c)
 *     NtUserEnableWindowShellWindowManagementBehavior @ 0x1402961A0 (NtUserEnableWindowShellWindowManagementBehavior.c)
 *     NtUserImpersonateDdeClientWindow @ 0x140299EE0 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserIsWindowDisplayChangeSuppressed @ 0x14029AEA0 (NtUserIsWindowDisplayChangeSuppressed.c)
 *     NtUserRegisterCloakedNotification @ 0x14029C740 (NtUserRegisterCloakedNotification.c)
 *     NtUserRegisterTouchpadCapableWindow @ 0x14029D080 (NtUserRegisterTouchpadCapableWindow.c)
 *     NtUserSetMaxTouchpadSensitivity @ 0x14029F5D0 (NtUserSetMaxTouchpadSensitivity.c)
 *     NtUserSetShellSpecialWindow @ 0x1402A0150 (NtUserSetShellSpecialWindow.c)
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 *     NtUserSuppressWindowDisplayChange @ 0x1402A27D0 (NtUserSuppressWindowDisplayChange.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BE800 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall AtomicExecutionCheck::Arm(AtomicExecutionCheck *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentThreadWin32Thread; // rax

  if ( !*(_BYTE *)this )
  {
    if ( !*(_QWORD *)W32GetUserSessionState(this, a2) || !IS_USERCRIT_OWNED_AT_ALL() )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v4, v3, v5, v6);
    *((_QWORD *)this + 1) = CurrentThreadWin32Thread;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
    *(_BYTE *)this = 1;
  }
}
