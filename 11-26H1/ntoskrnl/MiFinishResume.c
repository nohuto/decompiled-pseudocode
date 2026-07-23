/*
 * XREFs of MiFinishResume @ 0x1406F4600
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     MiIterateOverPartitions @ 0x1404A2784 (MiIterateOverPartitions.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
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

  Flink = (int)stru_140E2ED08.Timer.TimerListEntry.Flink;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((__int64)&stru_140E2ED08, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2ED08.Header.Lock, 0, (LegacyAutoBoost *)v8, &stru_140E2ED08);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2ED08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2ED08.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2ED08);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10, v9);
  if ( Flink == 3 )
    MiWalkAllBitmapRanges(
      (unsigned __int64 *)&stru_140E2ED08.WaitBlock[2],
      (__int64)MiMoveHibernateHugeRangesFreeToZeroCallback,
      0LL);
  _InterlockedAdd((volatile signed __int32 *)&stru_140E366D8.SystemCallNumber, 0xFFFFFFFF);
  if ( Flink == 3 )
  {
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread, v11, v12);
    LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) = 0;
    KeFlushQueuedDpcs();
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  stru_140E2ED08.WaitBlock[0].Thread = (struct _KTHREAD *)-1LL;
  return KeSetEvent((PRKEVENT)&stru_140E2ED08.Timer.TimerListEntry.Blink, 0, 0);
}
