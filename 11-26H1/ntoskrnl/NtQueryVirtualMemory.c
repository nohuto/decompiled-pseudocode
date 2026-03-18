/*
 * XREFs of NtQueryVirtualMemory @ 0x14091F830
 * Callers:
 *     DifNtQueryVirtualMemoryWrapper @ 0x140686860 (DifNtQueryVirtualMemoryWrapper.c)
 * Callees:
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 */

NTSTATUS __stdcall NtQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  return MmQueryVirtualMemory((ULONG_PTR)ProcessHandle, MemoryInformationLength, (__int64)ReturnLength, 2);
}
