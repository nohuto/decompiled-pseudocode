/*
 * XREFs of _LdrpInitialize @ 0x1800CC6B8
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CC1E8 (LdrpInitializeInternal.c)
 * Callees:
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpInitializationFailure @ 0x1800CB4A0 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CC2E4 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializationComplete @ 0x1800CC3C0 (LdrpInitializationComplete.c)
 *     LdrpTouchThreadStack @ 0x1800CC49C (LdrpTouchThreadStack.c)
 *     RtlpHpGCTimerEnable @ 0x1800CC558 (RtlpHpGCTimerEnable.c)
 *     LdrpInitializeTeb @ 0x1800CCA40 (LdrpInitializeTeb.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrInitializeMrdata @ 0x1800CCFB0 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpDoDebuggerBreak @ 0x180122418 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015BF50 (LdrpInitializeProcessWrapperFilter.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1801628B0 (ZwTestAlert.c)
 */

NTSTATUS __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r14
  NTSTATUS result; // eax
  _PEB *ProcessEnvironmentBlock; // rsi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  unsigned __int64 MinimumStackCommit; // rcx
  struct _PEB *v10; // rax

  v3 = NtCurrentTeb();
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( result == 1 && (v3->SameTebFlags & 0x2000) == 0 )
      goto LABEL_27;
    ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
    if ( !result )
    {
      ZwCreateEvent(&LdrpInitCompleteEvent, 0x1F0003u, 0LL, NotificationEvent, 0);
      v3->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
      LdrInitState = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      qword_1801DF068 = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTable = &RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTableLock.0 = 0LL;
      RtlpDynamicFunctionTableTreeMin = 0LL;
      RtlpDynamicFunctionTableTreeMax = 0LL;
      RtlpDynamicCallbackTableTreeMin = 0LL;
      RtlpDynamicCallbackTableTreeMax = 0LL;
      v7 = LdrInitializeMrdata();
      v6 = v7;
      if ( v7 < 0 )
      {
        result = LdrpLogInternal(
                   "minkernel\\ldr\\ldrinit.c",
                   2653,
                   (__int64)"_LdrpInitialize",
                   0,
                   "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
                   v7);
        goto LABEL_10;
      }
      if ( LdrpIsSecureProcess )
        LdrpDetourExist = 1;
      v8 = LdrpInitializeProcess(a1, a2);
      v6 = v8;
      if ( v8 < 0 )
      {
        result = LdrpLogInternal(
                   "minkernel\\ldr\\ldrinit.c",
                   2680,
                   (__int64)"_LdrpInitialize",
                   0,
                   "Process initialization failed with status 0x%08lx\n",
                   v8);
        goto LABEL_10;
      }
      result = LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
      MinimumStackCommit = ProcessEnvironmentBlock->MinimumStackCommit;
      if ( MinimumStackCommit )
      {
        result = LdrpTouchThreadStack(MinimumStackCommit);
        v6 = result;
      }
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      if ( LdrpThreadPool )
        result = RtlpHpGCTimerEnable(MinimumStackCommit, (__int64)LdrpThreadPool);
      if ( v6 >= 0 )
      {
        if ( !UseWOW64 || LdrpProcessInitialized == 1 )
          result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
        goto LABEL_10;
      }
LABEL_32:
      LdrpInitializationFailure(v6);
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
      RtlRaiseStatus(v6);
    }
    v6 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
      break;
LABEL_27:
    LdrpWaitForInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent);
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v10 = NtCurrentPeb();
    LdrpForkActiveLock.0 = 0LL;
    LdrpForkConditionVariable.0 = 0LL;
    v10->InheritedAddressSpace = 0;
    if ( v10->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
LABEL_5:
  if ( (v3->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1u);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    LdrpInitializeTeb(v3);
    if ( UseWOW64 )
      g_LdrpWow64LdrpInitialize(a1);
    result = LdrpInitializeThread(a1);
  }
LABEL_10:
  if ( v6 < 0 )
    goto LABEL_32;
  if ( (v3->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
