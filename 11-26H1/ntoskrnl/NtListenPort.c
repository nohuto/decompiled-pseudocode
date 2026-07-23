/*
 * XREFs of NtListenPort @ 0x1407C2C80
 * Callers:
 *     DifNtListenPortWrapper @ 0x14067DD50 (DifNtListenPortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     NtReplyWaitReceivePort @ 0x1407C2F80 (NtReplyWaitReceivePort.c)
 */

NTSTATUS __cdecl NtListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v6; // ebx

  if ( LODWORD(AlpcpMessageLogLock.TrapFrame) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeLeaveCriticalRegion();
    return -1073741637;
  }
  else
  {
    do
      v6 = NtReplyWaitReceivePort(PortHandle, 0LL, 0LL, ConnectionRequest);
    while ( !v6 && (RtlReadUShortFromUser((unsigned __int16 *)&ConnectionRequest->u2) & 0x7FFF) != 0xA );
    return v6;
  }
}
