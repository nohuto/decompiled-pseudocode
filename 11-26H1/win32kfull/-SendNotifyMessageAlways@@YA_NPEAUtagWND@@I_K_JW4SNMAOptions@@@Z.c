/*
 * XREFs of ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44
 * Callers:
 *     _anonymous_namespace_::NotifyPartExit @ 0x140046D64 (_anonymous_namespace_--NotifyPartExit.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140046E40 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x140154494 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401D6BB8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x14025D948 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A04C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1402CAF80 (HandleDisplayChangeForInactiveDesktops.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 */

bool __fastcall SendNotifyMessageAlways(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool result; // al
  _BYTE v8[8]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v8);
  result = (unsigned int)xxxSendMessageCallback(a1, a2, 0LL, 1LL, 0, a5 & 1, (a5 >> 1) & 1) != 0;
  if ( v8[0] )
    --*(_DWORD *)(v9 + 28);
  return result;
}
