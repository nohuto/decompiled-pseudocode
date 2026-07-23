/*
 * XREFs of NtImpersonateClientOfPort @ 0x1407C2C30
 * Callers:
 *     DifNtImpersonateClientOfPortWrapper @ 0x14067D730 (DifNtImpersonateClientOfPortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 */

NTSTATUS __cdecl NtImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS result; // eax

  if ( LODWORD(AlpcpMessageLogLock.TrapFrame) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeLeaveCriticalRegion();
    return -1073741637;
  }
  else
  {
    result = NtAlpcImpersonateClientOfPort(PortHandle, Message, 0LL);
    if ( result == -1073740030 )
      return -1073741281;
  }
  return result;
}
