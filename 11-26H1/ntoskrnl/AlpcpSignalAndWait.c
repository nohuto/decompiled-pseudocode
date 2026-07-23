/*
 * XREFs of AlpcpSignalAndWait @ 0x140263DA0
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140A8EEF4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLogUnwait @ 0x14077D5A8 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout,
        unsigned __int8 a6)
{
  int v6; // ebx
  void *v8; // rbp
  unsigned int v11; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v13; // ebx
  void *v14; // rcx

  v6 = *(_DWORD *)(a1 + 48);
  v8 = a2;
  LOBYTE(a2) = 1;
  AlpcpSignal(a1, a2, a6);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v11 = KeWaitForSingleObject(v8, a3, a4, (v6 & 0x200000) != 0, Timeout);
  CurrentThread = KeGetCurrentThread();
  v13 = v11;
  --CurrentThread->KernelApcDisable;
  if ( LOBYTE(stru_140E66D40.CycleTime) )
    AlpcpLogUnwait(v11);
  v14 = *(void **)(a1 + 32);
  if ( v14 )
    ObfDereferenceObject(v14);
  return v13;
}
