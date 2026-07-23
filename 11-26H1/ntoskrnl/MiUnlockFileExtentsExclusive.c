/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x1407736A8
 * Callers:
 *     MiInsertCopyExtents @ 0x1406FF27C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x1406FF634 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2D2D0.Spare18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D2D0.WaitBlock[3].Object);
  KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.Spare18);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v2, v1);
  }
}
