/*
 * XREFs of NtWriteRequestData @ 0x1407C2E10
 * Callers:
 *     DifNtReadRequestDataWrapper @ 0x14068B8A0 (DifNtReadRequestDataWrapper.c)
 *     DifNtWriteRequestDataWrapper @ 0x140695940 (DifNtWriteRequestDataWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

NTSTATUS __cdecl NtWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return -1073741637;
}
