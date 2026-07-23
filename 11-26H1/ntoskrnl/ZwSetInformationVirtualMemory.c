/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14072B5E0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1404C0730 (CmSiPrefetchVirtualMemoryRange.c)
 *     DifZwSetInformationVirtualMemoryWrapper @ 0x1406BECD0 (DifZwSetInformationVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
