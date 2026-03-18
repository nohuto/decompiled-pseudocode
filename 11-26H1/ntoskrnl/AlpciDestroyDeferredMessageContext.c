/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x140A64890
 * Callers:
 *     ExpWorkerFactoryFinishDeferredWork @ 0x14037D4AC (ExpWorkerFactoryFinishDeferredWork.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall AlpciDestroyDeferredMessageContext(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = *(void **)a1;
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *(_QWORD *)a1 = 0LL;
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3);
}
