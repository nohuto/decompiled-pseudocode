/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x14069E740
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1404893D4 (CmSiPrefetchVirtualMemoryRange.c)
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
