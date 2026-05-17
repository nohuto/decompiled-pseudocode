/*
 * XREFs of RtlAcquireSRWLockShared @ 0x18004C610
 * Callers:
 *     RtlpFcCallChangeCallbacks @ 0x180014374 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x18001A0F0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasAppend @ 0x18001A390 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x18001A610 (RtlpHpExtrasSetPresent.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180050768 (RtlpWnfCalculateAndSetNextTimer.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180057A60 (EtwpCheckForPrivatePreEnable.c)
 *     SbpUpdateCache @ 0x180063EC0 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18006745C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006E480 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18006F2E0 (RtlpCreateSerializationGroup.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFindLoadedDllByMapping @ 0x18008657C (LdrpFindLoadedDllByMapping.c)
 *     RtlpFlsDataCleanup @ 0x180087C90 (RtlpFlsDataCleanup.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18008B400 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlQueryProcessLockInformation @ 0x180091A70 (RtlQueryProcessLockInformation.c)
 *     RtlpFlsFree @ 0x1800942B4 (RtlpFlsFree.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180095F80 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpComputeExePath @ 0x18009A580 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18009AC60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009BCE0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18009BFB0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800B13D0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x1800B1940 (RtlpHpLargeAllocSize.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpFreeTls @ 0x1800D72A0 (LdrpFreeTls.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800D7C50 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800E6380 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800E7CF0 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800E86D0 (TpTrimPools.c)
 *     RtlpCSparseBitmapLock @ 0x1800E8F60 (RtlpCSparseBitmapLock.c)
 *     RtlpHpTagQueryTags @ 0x1800EB628 (RtlpHpTagQueryTags.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FFE04 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010FE70 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfRetryTimerCallback @ 0x1801115A0 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011FC7C (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x1801223E0 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x180141868 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180145C90 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180145D50 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x1801479C0 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadLock @ 0x180149970 (RtlRcuReadLock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FC20 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 */

unsigned __int64 __fastcall RtlAcquireSRWLockShared(volatile signed __int64 *a1)
{
  unsigned __int64 v1; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // eax
  volatile signed __int64 **v4; // r8
  unsigned __int64 result; // rax

  v1 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v4 = (volatile signed __int64 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v4 )
      {
        v1 = (unsigned __int64)&SchedulerSharedDataSlot[8 * i];
        if ( v4 )
          *v4 = a1;
        break;
      }
    }
  }
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    return RtlpAcquireSRWLockSharedContended(a1, v1, result, (unsigned __int64)a1);
  return result;
}
