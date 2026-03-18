/*
 * XREFs of NtCreatePort @ 0x1407BFB50
 * Callers:
 *     DifNtCreatePortWrapper @ 0x140672600 (DifNtCreatePortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtCreatePort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, 0LL);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
