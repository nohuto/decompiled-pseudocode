/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x1407706A8
 * Callers:
 *     MiInsertCopyExtents @ 0x1406FA5AC (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x1406FA964 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407705B4 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2D150.Spare18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D150.WaitBlock[3].Object);
  KeAbPostRelease((unsigned __int64)&stru_140E2D150.Spare18);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v2, v1);
  }
}
