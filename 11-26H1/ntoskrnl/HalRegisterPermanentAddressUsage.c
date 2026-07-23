/*
 * XREFs of HalRegisterPermanentAddressUsage @ 0x14059A750
 * Callers:
 *     HalpHpetDiscover @ 0x14059B0A8 (HalpHpetDiscover.c)
 *     HalpApicDiscover @ 0x1405A3BE4 (HalpApicDiscover.c)
 *     HalpApicRegisterIoUnit @ 0x1405A4488 (HalpApicRegisterIoUnit.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405AAB6C (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 */

NTSTATUS __stdcall HalRegisterPermanentAddressUsage(LARGE_INTEGER PhysicalAddress, ULONG SizeInBytes)
{
  __int64 v3; // rdi
  NTSTATUS result; // eax
  __int64 MemoryInternal; // rax
  ULONG_PTR v6; // rcx

  v3 = SizeInBytes;
  if ( !HalpTimerRegistrationAllowed )
    return -1073741431;
  MemoryInternal = HalpMmAllocateMemoryInternal(45, 1u);
  v6 = MemoryInternal;
  if ( !MemoryInternal )
    return -1073741801;
  *(_QWORD *)(MemoryInternal + 29) = 0LL;
  *(_QWORD *)(MemoryInternal + 37) = 0LL;
  *(_DWORD *)(MemoryInternal + 8) = 3;
  *(_BYTE *)(MemoryInternal + 12) = 33;
  *(LARGE_INTEGER *)(MemoryInternal + 13) = PhysicalAddress;
  *(_QWORD *)(MemoryInternal + 21) = v3;
  *(_QWORD *)MemoryInternal = HalpAddressUsageList;
  result = 0;
  HalpAddressUsageList = v6;
  return result;
}
