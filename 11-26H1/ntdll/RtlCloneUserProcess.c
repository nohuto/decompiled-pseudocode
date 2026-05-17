/*
 * XREFs of RtlCloneUserProcess @ 0x18015C640
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlWakeAllConditionVariable @ 0x1800784D0 (RtlWakeAllConditionVariable.c)
 *     LdrpAcquireLoaderLock @ 0x180084090 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18008E480 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F8458 (LdrpAllocateSchedulerSharedData.c)
 *     RtlpCreateUserProcess @ 0x1800FCCB8 (RtlpCreateUserProcess.c)
 *     LdrForkMrdata @ 0x18013811C (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801445D0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148E30 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x180148E9C (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpFlsCloneComplete @ 0x18014F270 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014F308 (RtlpFlsClonePrepare.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CD9C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x18015DDF8 (LdrpCompleteProcessCloning.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v9; // esi
  int v10; // ebp
  int v11; // r15d
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  volatile signed __int64 *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int UserProcess; // eax
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD v28[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v29; // [rsp+40h] [rbp-58h]
  __int128 v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+60h] [rbp-38h]

  v7 = a2;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = 2 * (a1 & 2);
  v11 = a1 & 1;
  v12 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      return (unsigned int)-1073741420;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    RtlpFlsClonePrepare((__int64)&RtlpFlsContext, v13);
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlAcquireSRWLockShared(&LdrpTlsLock);
    v15 = (volatile signed __int64 *)&unk_1801CB458;
    v16 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v15, v14);
      v15 += 2;
      --v16;
    }
    while ( v16 );
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock, v14);
    LdrForkMrdata(0, v17);
    RtlpFeatureConfigurationClonePrepare();
    v19 = RtlLockHeapManagerForCloning();
    if ( v19 < 0 )
    {
      RtlpFeatureConfigurationCloneComplete(0);
      LdrForkMrdata(2, v20);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0LL);
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpFlsCloneComplete((__int64)&RtlpFlsContext, 0);
      LdrpCompleteProcessCloning(0LL);
      return (unsigned int)v19;
    }
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock, v18);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock, v21);
    v7 = a2;
    LdrpForkInProgress = 1;
  }
  v28[1] = v7;
  v31 = 0LL;
  v28[0] = 1LL;
  v29 = a3;
  v30 = a4;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v10, v11, (__int64)v28, a5);
  v23 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v24 = 1;
      v9 = 1;
      qword_1801CB710 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_1801CB708 = -2;
      dword_1801CB70C = 1;
      qword_1801CB718 = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v24 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9, v25);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v24);
    RtlpFeatureConfigurationCloneComplete(v24);
    LdrpUnlockTlsDelayedReclaimTable(v24);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete((__int64)&RtlpFlsContext, v24);
    LdrpCompleteProcessCloning(v24);
    if ( v24 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v26);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable, v27);
      LdrpSchedulerSharedDataListHeadLock = 0LL;
      qword_1801CB958 = (__int64)&LdrpSchedulerSharedDataListHead;
      LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
      LdrpAllocateSchedulerSharedData();
      LdrpAcquireSchedulerSharedDataSlot((__int64)NtCurrentTeb());
    }
  }
  return v23;
}
