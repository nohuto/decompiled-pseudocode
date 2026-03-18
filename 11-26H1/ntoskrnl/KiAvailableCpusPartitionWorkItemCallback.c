/*
 * XREFs of KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x140463A18 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x140463A68 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404E0188 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 */

void __fastcall KiAvailableCpusPartitionWorkItemCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v6; // rdx
  _BYTE *v7; // rbx
  unsigned __int8 *i; // rbx
  void *j; // rcx
  __int64 NextProcess; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD **v13; // rdi
  _QWORD *k; // rbx
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0;
  if ( a1 == KiSystemCpuPartition )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (_BYTE *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64], 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
        0,
        (LegacyAutoBoost *)v7,
        (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
    }
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v6) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v7 + 33), v6, 1);
      }
      else
      {
        v7[10] = 1;
      }
    }
    for ( i = (unsigned __int8 *)KiSupervisorXStateFeaturesLock.WaitBlock[1].Object;
          i != &KiSupervisorXStateFeaturesLock.WaitBlockFill11[80];
          i = *(unsigned __int8 **)i )
    {
      KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(i + 16));
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
    KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64]);
    KeLeaveCriticalRegion();
    for ( j = 0LL; ; j = (void *)v11 )
    {
      NextProcess = PsGetNextProcess(j);
      v11 = NextProcess;
      if ( !NextProcess )
        break;
      if ( *(_QWORD *)(NextProcess + 432) == NextProcess + 432 )
      {
        KiUpdateProcessAvailableCpuState(NextProcess, 0LL);
        KiNotifyAvailableCpusChangeProcess(v11);
      }
    }
  }
  KiAcquireCpuPartitionAssignmentLock(&v15);
  v13 = (_QWORD **)(a1 + 16);
  for ( k = *v13; k != v13; k = (_QWORD *)*k )
  {
    LOBYTE(v12) = 1;
    KiUpdateProcessAvailableCpuState(*(k - 2), v12);
    KiNotifyAvailableCpusChangeProcess(*(k - 2));
  }
  KiReleaseCpuPartitionAssignmentLock(v15);
}
