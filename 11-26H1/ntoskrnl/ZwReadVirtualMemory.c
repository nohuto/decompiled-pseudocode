/*
 * XREFs of ZwReadVirtualMemory @ 0x1407287A0
 * Callers:
 *     DifZwReadVirtualMemoryWrapper @ 0x1406B9E50 (DifZwReadVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
