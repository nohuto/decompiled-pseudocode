/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140466280
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x1409C0480 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x140ACC1E4 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLogUnwait @ 0x14077A678 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        __int64 WaitReason,
        __int64 a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE v7; // di
  KWAIT_REASON v8; // esi
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v7 = a3;
  v8 = (int)WaitReason;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), WaitReason, a3);
  v9 = KeWaitForSingleObject(Object, v8, v7, a4, Timeout);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( BYTE4(stru_140E66B30.StackBase) )
    AlpcpLogUnwait(v9);
  return v9;
}
