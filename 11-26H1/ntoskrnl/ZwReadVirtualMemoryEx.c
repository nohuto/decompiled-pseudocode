/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x14072AEC0
 * Callers:
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 *     DifZwReadVirtualMemoryExWrapper @ 0x1406B9CA0 (DifZwReadVirtualMemoryExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
