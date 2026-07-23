/*
 * XREFs of ZwGetWriteWatch @ 0x14072A040
 * Callers:
 *     DifZwGetWriteWatchWrapper @ 0x1406ABD60 (DifZwGetWriteWatchWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
