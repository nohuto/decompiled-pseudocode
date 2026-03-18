/*
 * XREFs of PsInvokeWin32Callout @ 0x140A41140
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x1404B53BC (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140617338 (PspSetProcessTimerDelayForWin32.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407ED740 (PspEnsureGuiThreadAndBatchFlush.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1407F9000 (PspQueryProcessInterferenceCountCallback.c)
 *     PspSetUILimitJobObject @ 0x1407F9E58 (PspSetUILimitJobObject.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     NtAddAtomEx @ 0x140841670 (NtAddAtomEx.c)
 *     NtFindAtom @ 0x1408417F0 (NtFindAtom.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140A3F7F4 (PopInvokeWin32CalloutWithWatchdog.c)
 *     NtQueryInformationAtom @ 0x140A40600 (NtQueryInformationAtom.c)
 *     ExpWin32DeleteProcedure @ 0x140A408B0 (ExpWin32DeleteProcedure.c)
 *     NtDeleteAtom @ 0x140A40A80 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x140A40AE0 (PsConvertToGuiThread.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x14048806C (PsSessionGetWin32Callouts.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     PspUpdateCalloutParameters @ 0x1404FB6E0 (PspUpdateCalloutParameters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int128 *a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int128 *v5; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
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
