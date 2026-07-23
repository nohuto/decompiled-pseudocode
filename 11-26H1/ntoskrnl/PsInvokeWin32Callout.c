/*
 * XREFs of PsInvokeWin32Callout @ 0x1409FCB60
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x1404AEFD4 (SeCaptureAtomTableCallout.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14061A328 (PspSetProcessTimerDelayForWin32.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407F32A0 (PspEnsureGuiThreadAndBatchFlush.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1407FEB00 (PspQueryProcessInterferenceCountCallback.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     NtAddAtomEx @ 0x1408478B0 (NtAddAtomEx.c)
 *     NtFindAtom @ 0x140847A30 (NtFindAtom.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409FB214 (PopInvokeWin32CalloutWithWatchdog.c)
 *     NtQueryInformationAtom @ 0x1409FC020 (NtQueryInformationAtom.c)
 *     ExpWin32DeleteProcedure @ 0x1409FC2D0 (ExpWin32DeleteProcedure.c)
 *     NtDeleteAtom @ 0x1409FC4A0 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int128 *a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int128 *v5; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  signed __int64 *v7; // rsi
  signed __int64 v8; // rdx
  struct _EX_RUNDOWN_REF *v9; // rdi
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  DWORD2(v12) = 0;
  v5 = a2;
  *(_QWORD *)&v12 = 0LL;
  if ( !a2 )
  {
    v5 = &v12;
    v12 = 0LL;
  }
  if ( !(unsigned int)PspUpdateCalloutParameters(a1, (__int64)v5, a3, a4) )
    return 3221225485LL;
  Win32Callouts = PsSessionGetWin32Callouts();
  v13 = 0LL;
  v7 = (signed __int64 *)Win32Callouts;
  v9 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts, v8);
  if ( v9 )
  {
    KeCallbackValidationPrologue((__int64)&v13);
    v10 = guard_dispatch_icall_no_overrides(v9[2].Count, v4);
    KeCallbackValidationEpilogue((__int64)&v13, v9[1].Count, 0x103u);
    ExDereferenceCallBackBlock(v7, v9);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
