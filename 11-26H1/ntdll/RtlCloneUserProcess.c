/*
 * XREFs of RtlCloneUserProcess @ 0x18015C500
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x180139B00 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlWakeAllConditionVariable @ 0x180066CF0 (RtlWakeAllConditionVariable.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800E6D70 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F7C28 (LdrpAllocateSchedulerSharedData.c)
 *     RtlpCreateUserProcess @ 0x1800FC408 (RtlpCreateUserProcess.c)
 *     LdrForkMrdata @ 0x180137E8C (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801444C0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148CE0 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x180148D4C (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpFlsCloneComplete @ 0x18014F120 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014F1B8 (RtlpFlsClonePrepare.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CC5C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x18015DCB8 (LdrpCompleteProcessCloning.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PSECURITY_DESCRIPTOR v7; // rax
  int v9; // esi
  ULONG v10; // ebp
  ULONG v11; // r15d
  ULONG v12; // edi
  _RTL_SRWLOCK *v13; // rbx
  __int64 v14; // r14
  NTSTATUS v15; // ebx
  NTSTATUS UserProcess; // eax
  NTSTATUS v17; // ebp
  unsigned int v18; // ebx
  _QWORD v19[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v20; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+60h] [rbp-38h]

  v7 = ProcessSecurityDescriptor;
  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v9 = 2;
  v10 = 2 * (ProcessFlags & 2);
  v11 = ProcessFlags & 1;
  v12 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      return -1073741420;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    RtlpFlsClonePrepare(&RtlpFlsContext);
    RtlEnterCriticalSection(&FastPebLock);
    RtlAcquireSRWLockShared(&LdrpTlsLock);
    v13 = &stru_1801CA4A8;
    v14 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v13);
      v13 += 2;
      --v14;
    }
    while ( v14 );
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrForkMrdata(0);
    RtlpFeatureConfigurationClonePrepare();
    v15 = RtlLockHeapManagerForCloning();
    if ( v15 < 0 )
    {
      RtlpFeatureConfigurationCloneComplete(0);
      LdrForkMrdata(2);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0LL);
      RtlLeaveCriticalSection(&FastPebLock);
      RtlpFlsCloneComplete((__int64)&RtlpFlsContext, 0);
      LdrpCompleteProcessCloning(0LL);
      return v15;
    }
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    v7 = ProcessSecurityDescriptor;
    LdrpForkInProgress = 1;
  }
  v19[1] = v7;
  v22 = 0LL;
  v19[0] = 1LL;
  v20 = (unsigned __int64)ThreadSecurityDescriptor;
  v21 = (unsigned __int64)DebugPort;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v10, v11, (__int64)v19, (__int64)ProcessInformation);
  v17 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
      v18 = 1;
      v9 = 1;
      FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      FastPebLock.LockCount = -2;
      FastPebLock.RecursionCount = 1;
      FastPebLock.LockSemaphore = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v18 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v18);
    RtlpFeatureConfigurationCloneComplete(v18);
    LdrpUnlockTlsDelayedReclaimTable(v18);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete((__int64)&RtlpFlsContext, v18);
    LdrpCompleteProcessCloning(v18);
    if ( v18 )
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
  return v17;
}
