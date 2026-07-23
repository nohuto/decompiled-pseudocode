/*
 * XREFs of AlpcpCompleteDeferSignalRequestAndWait @ 0x140A8EEF4
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x140263DA0 (AlpcpSignalAndWait.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLogUnwait @ 0x14077D5A8 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpCompleteDeferSignalRequestAndWait(
        __int64 a1,
        void *a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout)
{
  BOOLEAN v7; // bl
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax

  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
  {
    return (unsigned int)AlpcpSignalAndWait(a1, a2, WrLpcReceive, a4, Timeout, 0);
  }
  else
  {
    v7 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = KeWaitForSingleObject(a2, WrLpcReceive, a4, v7, Timeout);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( LOBYTE(stru_140E66D40.CycleTime) )
      AlpcpLogUnwait(v8);
  }
  return v8;
}
