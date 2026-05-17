/*
 * XREFs of RtlPrepareForProcessCloning @ 0x18015CB00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrForkMrdata @ 0x18013811C (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148E30 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x180148E9C (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpFlsCloneComplete @ 0x18014F270 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014F308 (RtlpFlsClonePrepare.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CD9C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  volatile signed __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare((__int64)&RtlpFlsContext, v0);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v2 = (volatile signed __int64 *)&unk_1801CB458;
  v3 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v2, v1);
    v2 += 2;
    --v3;
  }
  while ( v3 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock, v1);
  LdrForkMrdata(0, v4);
  RtlpFeatureConfigurationClonePrepare();
  v6 = RtlLockHeapManagerForCloning();
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock, v5);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock, v9);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    RtlpFeatureConfigurationCloneComplete(0);
    LdrForkMrdata(2, v7);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete((__int64)&RtlpFlsContext, 0);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v6;
  }
  return result;
}
