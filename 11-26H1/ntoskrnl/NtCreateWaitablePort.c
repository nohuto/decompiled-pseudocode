/*
 * XREFs of NtCreateWaitablePort @ 0x1407C2BF0
 * Callers:
 *     DifNtCreateWaitablePortWrapper @ 0x140678D50 (DifNtCreateWaitablePortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __cdecl NtCreateWaitablePort(
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
  v8 = 1;
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, ObjectAttributes, 0LL, MaxMessageLength, v8, v9);
  KeLeaveCriticalRegion();
  return ConnectionPort;
}
