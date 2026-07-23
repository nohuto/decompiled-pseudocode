/*
 * XREFs of ZwWriteVirtualMemory @ 0x140728700
 * Callers:
 *     DifZwWriteVirtualMemoryWrapper @ 0x1406C3C70 (DifZwWriteVirtualMemoryWrapper.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B7102C (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
