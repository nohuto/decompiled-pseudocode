/*
 * XREFs of NtAlpcCreatePort @ 0x140AE76F0
 * Callers:
 *     DifNtAlpcCreatePortWrapper @ 0x14066C510 (DifNtAlpcCreatePortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtAlpcCreatePort(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, a3);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
