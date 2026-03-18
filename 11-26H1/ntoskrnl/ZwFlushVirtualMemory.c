/*
 * XREFs of ZwFlushVirtualMemory @ 0x140725270
 * Callers:
 *     DifZwFlushVirtualMemoryWrapper @ 0x1406A69A0 (DifZwFlushVirtualMemoryWrapper.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
