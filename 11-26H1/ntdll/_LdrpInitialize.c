/*
 * XREFs of _LdrpInitialize @ 0x1800CEF48
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CEA78 (LdrpInitializeInternal.c)
 * Callees:
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpInitializationFailure @ 0x1800CDD30 (LdrpInitializationFailure.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CEB74 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializationComplete @ 0x1800CEC50 (LdrpInitializationComplete.c)
 *     LdrpTouchThreadStack @ 0x1800CED2C (LdrpTouchThreadStack.c)
 *     RtlpHpGCTimerEnable @ 0x1800CEDE8 (RtlpHpGCTimerEnable.c)
 *     LdrpInitializeTeb @ 0x1800CF2D0 (LdrpInitializeTeb.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrInitializeMrdata @ 0x1800CF840 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpDoDebuggerBreak @ 0x180122678 (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015C090 (LdrpInitializeProcessWrapperFilter.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x1801629B0 (ZwTestAlert.c)
 */

__int64 __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r14
  __int64 result; // rax
  _PEB *ProcessEnvironmentBlock; // rsi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  unsigned __int64 MinimumStackCommit; // rcx
  struct _PEB *v10; // rax

  v3 = NtCurrentTeb();
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( (_DWORD)result == 1 && (v3->SameTebFlags & 0x2000) == 0 )
      goto LABEL_27;
    ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
    if ( !(_DWORD)result )
    {
      ZwCreateEvent(&LdrpInitCompleteEvent, 2031619LL, 0LL, 0LL, 0);
      v3->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
      LdrInitState = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      qword_1801E0068 = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTableLock = 0LL;
      RtlpDynamicFunctionTableTreeMin = 0LL;
      RtlpDynamicFunctionTableTreeMax = 0LL;
      RtlpDynamicCallbackTableTreeMin = 0LL;
      RtlpDynamicCallbackTableTreeMax = 0LL;
      v7 = LdrInitializeMrdata();
      v6 = v7;
      if ( v7 < 0 )
      {
        result = LdrpLogInternal(
                   (int)"minkernel\\ldr\\ldrinit.c",
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
                   (int)"minkernel\\ldr\\ldrinit.c",
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
        result = RtlpHpGCTimerEnable(MinimumStackCommit, LdrpThreadPool);
      if ( v6 >= 0 )
      {
        if ( !UseWOW64 || LdrpProcessInitialized == 1 )
          result = (__int64)LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
        goto LABEL_10;
      }
LABEL_32:
      LdrpInitializationFailure(v6);
      ZwTerminateProcess(-1LL, (unsigned int)v6);
      RtlRaiseStatus(v6);
    }
    v6 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
      break;
LABEL_27:
    LdrpWaitForInitializationComplete(&LdrpProcessInitialized, (HANDLE *)&LdrpInitCompleteEvent);
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v10 = NtCurrentPeb();
    LdrpForkActiveLock = 0LL;
    LdrpForkConditionVariable = 0LL;
    v10->InheritedAddressSpace = 0;
    if ( v10->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  result = (__int64)LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
LABEL_5:
  if ( (v3->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, (signed __int64)&LdrpForkActiveLock, 0LL, 1);
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
