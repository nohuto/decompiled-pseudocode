/*
 * XREFs of MiUnlockFileExtentsShared @ 0x14086D4BC
 * Callers:
 *     MiIsExtentDangling @ 0x1406FA730 (MiIsExtentDangling.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void MiUnlockFileExtentsShared()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2D150.Spare18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2D150.WaitBlock[3].Object);
  KeAbPostRelease((unsigned __int64)&stru_140E2D150.Spare18);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v2, v1);
  }
}
