/*
 * XREFs of NtCreatePort @ 0x1407C2BB0
 * Callers:
 *     DifNtCreatePortWrapper @ 0x1406761E0 (DifNtCreatePortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __cdecl NtCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // ebx
  char v8; // [rsp+20h] [rbp-18h]
  char v9; // [rsp+28h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, ObjectAttributes, 0LL, MaxMessageLength, v8, v9);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
