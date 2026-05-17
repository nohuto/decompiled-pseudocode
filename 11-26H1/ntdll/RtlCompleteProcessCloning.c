/*
 * XREFs of RtlCompleteProcessCloning @ 0x18015C950
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x1800784D0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18008E480 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F8458 (LdrpAllocateSchedulerSharedData.c)
 *     LdrForkMrdata @ 0x18013811C (LdrForkMrdata.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801445D0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148E30 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFlsCloneComplete @ 0x18014F270 (RtlpFlsCloneComplete.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CD9C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 */

struct _TEB *__fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  __int64 v3; // rdx
  struct _TEB *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    qword_1801CB710 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_1801CB708 = -2;
    dword_1801CB70C = 1;
    qword_1801CB718 = 0LL;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2, v3);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock = 1LL;
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  RtlpFeatureConfigurationCloneComplete(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpFlsCloneComplete((__int64)&RtlpFlsContext, a1);
  result = (struct _TEB *)LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v5);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable, v6);
    LdrpSchedulerSharedDataListHeadLock = 0LL;
    qword_1801CB958 = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpAllocateSchedulerSharedData();
    return LdrpAcquireSchedulerSharedDataSlot((__int64)NtCurrentTeb());
  }
  return result;
}
