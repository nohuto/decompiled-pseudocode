/*
 * XREFs of RtlRaiseStatus @ 0x18004A7C0
 * Callers:
 *     LdrUnlockLoaderLock @ 0x18002B040 (LdrUnlockLoaderLock.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlIsNameInExpression @ 0x180036670 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800366E8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x18004A6E0 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 *     RtlpInitRandomExVector @ 0x18006EDE4 (RtlpInitRandomExVector.c)
 *     RtlpSubSegmentInitialize @ 0x180074E80 (RtlpSubSegmentInitialize.c)
 *     RtlInitializeSListHead @ 0x180075D90 (RtlInitializeSListHead.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     RtlEncodePointer @ 0x18007E8D0 (RtlEncodePointer.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDeactivateActivationContext @ 0x180088D10 (RtlDeactivateActivationContext.c)
 *     RtlAcquireResourceShared @ 0x1800C75D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800CC470 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800CC6B0 (RtlReleaseResource.c)
 *     LdrInitializeThunk @ 0x1800CE970 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     RtlpUnwindOpSlots @ 0x1800E4CE4 (RtlpUnwindOpSlots.c)
 *     LdrLockLoaderLock @ 0x1800E67E0 (LdrLockLoaderLock.c)
 *     RtlGrowFunctionTable @ 0x1800ED2C0 (RtlGrowFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x18010B330 (RtlConvertExclusiveToShared.c)
 *     RtlInitializeContext @ 0x18010BD30 (RtlInitializeContext.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180111D70 (RtlIsNameInUnUpcasedExpression.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D210 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D2F8 (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     RtlWow64PushCrossProcessWorkOntoFreeList @ 0x1801252F0 (RtlWow64PushCrossProcessWorkOntoFreeList.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x18013DF00 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013DF50 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpUnWaitCriticalSection @ 0x18013E050 (RtlpUnWaitCriticalSection.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014AE50 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014B4AC (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x18014CD80 (RtlWow64PopAllCrossProcessWorkFromWorkList.c)
 *     RtlWow64PopCrossProcessWorkFromFreeList @ 0x18014CE60 (RtlWow64PopCrossProcessWorkFromFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x18014CF20 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D5C0 (LdrpLogFatalUserCallbackException.c)
 *     KiUserApcDispatcher @ 0x180162E50 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x180162EE0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x180162F70 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x180162FC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x180127570 (RtlRaiseNoncontinuableException.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[132]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x7CuLL);
  v5[0] = a1;
  v3 = 1;
  v6 = 0LL;
  v8 = 0;
  v5[1] = 129;
  v7 = -1LL;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v10, v2);
    if ( NtCurrentPeb()->BeingDebugged )
      break;
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
