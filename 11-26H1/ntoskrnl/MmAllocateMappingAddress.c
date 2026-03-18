/*
 * XREFs of MmAllocateMappingAddress @ 0x140AF1F30
 * Callers:
 *     SmFpPreAllocate @ 0x1403EFFC0 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C0B08 (HvlpInitializeHvCrashdump.c)
 *     DifMmAllocateMappingAddressWrapper @ 0x140665C30 (DifMmAllocateMappingAddressWrapper.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB0100 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB03C4 (HalpDmaAllocateReservedMapping.c)
 *     PspIumInitialize @ 0x140CD913C (PspIumInitialize.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140AF1F50 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
