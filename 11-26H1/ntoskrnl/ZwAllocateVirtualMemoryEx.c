/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x140728EC0
 * Callers:
 *     DifZwAllocateVirtualMemoryExWrapper @ 0x14069D910 (DifZwAllocateVirtualMemoryExWrapper.c)
 *     PspSetupReservedUserMappings @ 0x140ADB07C (PspSetupReservedUserMappings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
