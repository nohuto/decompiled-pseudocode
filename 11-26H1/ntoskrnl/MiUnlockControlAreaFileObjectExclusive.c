/*
 * XREFs of MiUnlockControlAreaFileObjectExclusive @ 0x140315838
 * Callers:
 *     MiPostInsertVad @ 0x140316744 (MiPostInsertVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockControlAreaFileObjectExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 104;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 104);
  KeAbPostRelease(v2);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v4, v3);
  }
}
