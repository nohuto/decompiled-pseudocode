/*
 * XREFs of MiUnlockControlAreaFileObjectExclusive @ 0x140317868
 * Callers:
 *     MiPostInsertVad @ 0x140318774 (MiPostInsertVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
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
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v4, v3);
  }
}
