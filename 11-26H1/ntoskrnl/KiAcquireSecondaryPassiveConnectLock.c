/*
 * XREFs of KiAcquireSecondaryPassiveConnectLock @ 0x1404231CC
 * Callers:
 *     KiDisconnectSecondaryInterrupt @ 0x140424278 (KiDisconnectSecondaryInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404247F8 (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiAcquireSecondaryPassiveConnectLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}
