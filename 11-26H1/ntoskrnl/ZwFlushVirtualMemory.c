/*
 * XREFs of ZwFlushVirtualMemory @ 0x140729E40
 * Callers:
 *     DifZwFlushVirtualMemoryWrapper @ 0x1406AA580 (DifZwFlushVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
