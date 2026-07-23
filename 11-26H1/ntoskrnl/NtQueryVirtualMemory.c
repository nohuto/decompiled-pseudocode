/*
 * XREFs of NtQueryVirtualMemory @ 0x1409243A0
 * Callers:
 *     DifNtQueryVirtualMemoryWrapper @ 0x14068A440 (DifNtQueryVirtualMemoryWrapper.c)
 * Callees:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
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
