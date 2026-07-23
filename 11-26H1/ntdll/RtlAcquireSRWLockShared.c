/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180036B90
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003ACE8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180041FE0 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpFcCallChangeCallbacks @ 0x18005FAA4 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180063920 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18006E838 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpFlsFree @ 0x180073484 (RtlpFlsFree.c)
 *     RtlQueryProcessLockInformation @ 0x180074010 (RtlQueryProcessLockInformation.c)
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800781F0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFindLoadedDllByMapping @ 0x18007D91C (LdrpFindLoadedDllByMapping.c)
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 *     RtlpHpTagReAllocateHeap @ 0x180080F40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x1800814B0 (RtlpHpLargeAllocSize.c)
 *     SbpUpdateCache @ 0x180084310 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800878AC (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18008F730 (RtlpCreateSerializationGroup.c)
 *     RtlpComputeExePath @ 0x1800996B0 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x180099D90 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009AE10 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18009B0E0 (RtlpComputeDllPathWithOptions.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpFreeTls @ 0x1800D4260 (LdrpFreeTls.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800D4C10 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800E4590 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800E6750 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 *     RtlpCSparseBitmapLock @ 0x1800E8170 (RtlpCSparseBitmapLock.c)
 *     RtlpHpTagQueryTags @ 0x1800EA838 (RtlpHpTagQueryTags.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FF554 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010FA00 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfRetryTimerCallback @ 0x180111120 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011FA2C (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x180122180 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x180141768 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180145B40 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180145C00 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180147870 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadLock @ 0x180149820 (RtlRcuReadLock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FAD0 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 v1; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // eax
  PRTL_SRWLOCK *v4; // r8
  volatile signed __int64 *v5; // rax

  v1 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v4 = (PRTL_SRWLOCK *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v4 )
      {
        v1 = (unsigned __int64)&SchedulerSharedDataSlot[8 * i];
        if ( v4 )
          *v4 = SRWLock;
        break;
      }
    }
  }
  v5 = (volatile signed __int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( v5 )
    RtlpAcquireSRWLockSharedContended((volatile signed __int64 *)SRWLock, v1, v5, (char *)SRWLock);
}
