/*
 * XREFs of NtCompleteConnectPort @ 0x1407C2B70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

NTSTATUS __cdecl NtCompleteConnectPort(HANDLE PortHandle)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !LODWORD(AlpcpMessageLogLock.TrapFrame) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return -1073741637;
}
