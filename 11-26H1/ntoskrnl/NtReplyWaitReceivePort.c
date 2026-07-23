/*
 * XREFs of NtReplyWaitReceivePort @ 0x1407C2F80
 * Callers:
 *     DifNtReplyWaitReceivePortWrapper @ 0x14068D1E0 (DifNtReplyWaitReceivePortWrapper.c)
 *     NtListenPort @ 0x1407C2C80 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     NtReplyWaitReceivePortEx @ 0x1407C2FD0 (NtReplyWaitReceivePortEx.c)
 */

NTSTATUS __cdecl NtReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !LODWORD(AlpcpMessageLogLock.TrapFrame) )
    return NtReplyWaitReceivePortEx(PortHandle, PortContext, ReplyMessage, ReceiveMessage, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return -1073741637;
}
