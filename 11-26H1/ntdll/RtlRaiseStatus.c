/*
 * XREFs of RtlRaiseStatus @ 0x180034D40
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180016140 (LdrUnlockLoaderLock.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlIsNameInExpression @ 0x1800217D0 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180021848 (RtlpIsNameInExpressionPrivate.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180022770 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x180034C60 (RtlpNotOwnerCriticalSection.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlDecodePointer @ 0x180037B50 (RtlDecodePointer.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDeactivateActivationContext @ 0x180080110 (RtlDeactivateActivationContext.c)
 *     RtlpInitRandomExVector @ 0x18008F234 (RtlpInitRandomExVector.c)
 *     RtlpSubSegmentInitialize @ 0x180095A70 (RtlpSubSegmentInitialize.c)
 *     RtlInitializeSListHead @ 0x180096990 (RtlInitializeSListHead.c)
 *     RtlAcquireResourceShared @ 0x1800C4D90 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800C9BE0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800C9E20 (RtlReleaseResource.c)
 *     LdrInitializeThunk @ 0x1800CC0E0 (LdrInitializeThunk.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     RtlEncodePointer @ 0x1800D8BA0 (RtlEncodePointer.c)
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 *     LdrLockLoaderLock @ 0x1800E49F0 (LdrLockLoaderLock.c)
 *     RtlGrowFunctionTable @ 0x1800EC760 (RtlGrowFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x18010ACA0 (RtlConvertExclusiveToShared.c)
 *     RtlInitializeContext @ 0x18010B880 (RtlInitializeContext.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011CFC0 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D0A8 (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     RtlWow64PushCrossProcessWorkOntoFreeList @ 0x180125060 (RtlWow64PushCrossProcessWorkOntoFreeList.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x18013DDB0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013DE00 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpUnWaitCriticalSection @ 0x18013DF00 (RtlpUnWaitCriticalSection.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014AD00 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014B35C (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x18014CC30 (RtlWow64PopAllCrossProcessWorkFromWorkList.c)
 *     RtlWow64PopCrossProcessWorkFromFreeList @ 0x18014CD10 (RtlWow64PopCrossProcessWorkFromFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x18014CDD0 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D480 (LdrpLogFatalUserCallbackException.c)
 *     KiUserApcDispatcher @ 0x180162D50 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x180162DE0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x180162E70 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x180162EC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseNoncontinuableException @ 0x1801272E0 (RtlRaiseNoncontinuableException.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  ExceptionRecord.ExceptionCode = Status;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionFlags = 129;
  ExceptionRecord.ExceptionAddress = (void *)-1LL;
  RtlRaiseNoncontinuableException(&ExceptionRecord, &ContextRecord);
}
