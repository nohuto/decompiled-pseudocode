/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x14038713C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1405B30BC (McTemplateK0j_EtwWriteTransfer.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405B4154 (CcSetupWatchForRegistryChanges.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1405B5A14 (CcQueueAsyncGetDeviceGuid.c)
 *     McGenEventRegister_EtwRegister @ 0x1405B5AA8 (McGenEventRegister_EtwRegister.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CcGetDeviceGuid @ 0x140A2EB0C (CcGetDeviceGuid.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, volatile signed __int64 **a2)
{
  char v2; // r13
  __int64 v3; // r8
  __int64 v6; // r12
  struct _KTHREAD *i; // rax
  volatile signed __int64 *v8; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rax
  struct _KTHREAD *j; // rax
  volatile signed __int64 *v13; // rsi
  _QWORD *UserWaitTime; // rax
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  v3 = a1;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v3 + 8);
  KeRcuReadLock(a1);
  for ( i = (struct _KTHREAD *)EmpParseLock.KernelWaitTime;
        i != (struct _KTHREAD *)&EmpParseLock.KernelWaitTime;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    v8 = (volatile signed __int64 *)&i[-1].Padding[2];
    if ( i[-1].Padding[4] == v6 )
    {
      if ( _InterlockedIncrement64(v8 + 1) <= 1 )
        __fastfail(0xEu);
      KeRcuReadUnlock();
      goto LABEL_8;
    }
  }
  KeRcuReadUnlock();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xAC8uLL, 0x6D566343u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_DWORD *)PoolWithTag = 180880120;
  PoolWithTag[1] = 1LL;
  PoolWithTag[2] = v6;
  v11 = PoolWithTag + 27;
  v11[1] = v11;
  *v11 = v11;
  *((_DWORD *)v8 + 53) = _InterlockedIncrement(&CcNextVolumeId);
  memset_0((void *)(v8 + 31), 0, 0x4D0uLL);
  if ( *(_DWORD *)(v6 + 72) != 20 && !memcmp((const void *)(v8 + 29), &GUID_NULL, 0x10uLL) )
    CcGetDeviceGuid(a1, v8 + 29);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (struct _KTHREAD *)EmpParseLock.KernelWaitTime;
        j != (struct _KTHREAD *)&EmpParseLock.KernelWaitTime;
        j = *(struct _KTHREAD **)&j->Header.Lock )
  {
    v13 = (volatile signed __int64 *)&j[-1].Padding[2];
    if ( j[-1].Padding[4] == v6 )
    {
      if ( _InterlockedIncrement64(v13 + 1) <= 1 )
        __fastfail(0xEu);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag((PVOID)v8, 0x6D566343u);
      *a2 = v13;
      return 0LL;
    }
  }
  UserWaitTime = (_QWORD *)EmpParseLock.UserWaitTime;
  *((_QWORD *)v8 + 3) = &EmpParseLock.KernelWaitTime;
  *((_QWORD *)v8 + 4) = UserWaitTime;
  *UserWaitTime = v8 + 3;
  EmpParseLock.UserWaitTime = (unsigned __int64)(v8 + 3);
  _InterlockedAdd64((volatile signed __int64 *)&EmpParseLock.Timer.TimerListEntry.Blink, 1uLL);
  if ( *(_DWORD *)(*((_QWORD *)v8 + 2) + 72LL) != 20 && !memcmp((const void *)(v8 + 29), &GUID_NULL, 0x10uLL) )
  {
    if ( _InterlockedIncrement64(v8 + 1) <= 1 )
      __fastfail(0xEu);
    v2 = 1;
  }
  if ( CcRegisterForContainerRestoreDone )
  {
    v15 = 0;
  }
  else
  {
    CcRegisterForContainerRestoreDone = 1;
    v15 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
    CcQueueAsyncGetDeviceGuid(v8, a1);
  if ( !CcRegistryWatchInitComplete )
    CcSetupWatchForRegistryChanges(v17, v16, v18);
  if ( !CcEtwLoggingInitialized )
    CcEtwLoggingInitialized = (int)McGenEventRegister_EtwRegister(
                                     MS_KernelCc_Provider,
                                     v16,
                                     &MS_KernelCc_Provider_Context,
                                     &MS_KernelCc_Provider_Context,
                                     LockHandle.LockQueue.Next,
                                     LockHandle.LockQueue.Lock,
                                     *(_QWORD *)&LockHandle.OldIrql) >= 0;
  if ( (EmpParseLock.SchedulerAssistLastYieldBoostTime & 0x100000000LL) != 0 )
    McTemplateK0j_EtwWriteTransfer(&MS_KernelCc_Provider_Context, CcEvt_VolumeCacheMap_Init, v18, v8 + 29);
  if ( v15 && !(_BYTE)dword_140FBF22C )
  {
    CcContainerRestoreWorkItem.Parameter = 0LL;
    CcContainerRestoreWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CcRegisterForContainerRestore;
    CcContainerRestoreWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&CcContainerRestoreWorkItem, DelayedWorkQueue);
  }
LABEL_8:
  *a2 = v8;
  return 0LL;
}
