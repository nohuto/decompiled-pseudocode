/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x1404905CC
 * Callers:
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 104);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((unsigned __int64)v2);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v4, v3);
  }
}
