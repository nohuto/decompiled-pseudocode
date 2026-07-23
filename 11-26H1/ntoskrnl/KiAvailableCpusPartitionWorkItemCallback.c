/*
 * XREFs of KiAvailableCpusPartitionWorkItemCallback @ 0x1405E83B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14045C9D8 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14045CA28 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404D9868 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404D98B0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
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
    v7 = (_BYTE *)KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1], 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1],
        0,
        (LegacyAutoBoost *)v7,
        (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[48]);
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
    for ( i = (unsigned __int8 *)KiSupervisorXStateFeaturesLock.WaitBlock[0].Object;
          i != &KiSupervisorXStateFeaturesLock.WaitBlockFill11[32];
          i = *(unsigned __int8 **)i )
    {
      KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(i + 16));
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1]);
    KeAbPostRelease((unsigned __int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1]);
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
