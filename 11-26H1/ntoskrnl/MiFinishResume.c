/*
 * XREFs of MiFinishResume @ 0x1406EF990
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiWalkAllBitmapRanges @ 0x14044B8F0 (MiWalkAllBitmapRanges.c)
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
 *     MiLockDynamicMemoryShared @ 0x1404CB6E0 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404D0330 (MiUnlockDynamicMemoryShared.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int Flink; // esi
  struct _KTHREAD *CurrentThread; // rbx
  volatile unsigned __int8 *v7; // rdx
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  bool v13; // zf

  Flink = (int)stru_140E2EB88.Timer.TimerListEntry.Flink;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((__int64)&stru_140E2EB88, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2EB88, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2EB88.Header.Lock, 0, (LegacyAutoBoost *)v8, &stru_140E2EB88);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v8 + 33), v7, 1);
    }
    else
    {
      v8[10] = 1;
    }
  }
  MiIterateOverPartitions((__int64)MiMirrorPurgePartitionPages, a1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2EB88, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2EB88.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2EB88);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10, v9);
  if ( Flink == 3 )
    MiWalkAllBitmapRanges(
      (unsigned __int64 *)&stru_140E2EB88.WaitBlock[2],
      (__int64)MiMoveHibernateHugeRangesFreeToZeroCallback,
      0LL);
  _InterlockedAdd((volatile signed __int32 *)&stru_140E36558.SystemCallNumber, 0xFFFFFFFF);
  if ( Flink == 3 )
  {
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread, v11, v12);
    LODWORD(stru_140E2EB88.Timer.TimerListEntry.Flink) = 0;
    KeFlushQueuedDpcs();
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  stru_140E2EB88.WaitBlock[0].Thread = (struct _KTHREAD *)-1LL;
  return KeSetEvent((PRKEVENT)&stru_140E2EB88.Timer.TimerListEntry.Blink, 0, 0);
}
