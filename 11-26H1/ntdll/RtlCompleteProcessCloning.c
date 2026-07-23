/*
 * XREFs of RtlCompleteProcessCloning @ 0x18015C810
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180066CF0 (RtlWakeAllConditionVariable.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800E6D70 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F7C28 (LdrpAllocateSchedulerSharedData.c)
 *     LdrForkMrdata @ 0x180137E8C (LdrForkMrdata.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801444C0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148CE0 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFlsCloneComplete @ 0x18014F120 (RtlpFlsCloneComplete.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CC5C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x18015DCB8 (LdrpCompleteProcessCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi

  if ( a1 )
  {
    RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    v2 = 1;
    FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    FastPebLock.LockSemaphore = 0LL;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  RtlpFeatureConfigurationCloneComplete(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection(&FastPebLock);
  RtlpFlsCloneComplete((__int64)&RtlpFlsContext, a1);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    LdrpSchedulerSharedDataListHeadLock.0 = 0LL;
    qword_1801CA998 = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpAllocateSchedulerSharedData();
    LdrpAcquireSchedulerSharedDataSlot((__int64)NtCurrentTeb());
  }
}
