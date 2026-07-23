/*
 * XREFs of MiUnlockFileExtentsShared @ 0x14087388C
 * Callers:
 *     MiIsExtentDangling @ 0x1406FF400 (MiIsExtentDangling.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

void MiUnlockFileExtentsShared()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2D2D0.Spare18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2D2D0.WaitBlock[3].Object);
  KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.Spare18);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v2, v1);
  }
}
