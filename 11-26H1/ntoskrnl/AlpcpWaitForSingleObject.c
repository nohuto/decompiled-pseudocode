/*
 * XREFs of AlpcpWaitForSingleObject @ 0x14045F3E0
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLogUnwait @ 0x14077D5A8 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax

  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v9 = KeWaitForSingleObject(Object, WaitReason, a3, a4, Timeout);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( LOBYTE(stru_140E66D40.CycleTime) )
    AlpcpLogUnwait(v9);
  return v9;
}
