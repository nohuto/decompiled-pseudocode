/*
 * XREFs of MmAllocateMappingAddress @ 0x140AF4800
 * Callers:
 *     SmFpPreAllocate @ 0x1403E9990 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C3378 (HvlpInitializeHvCrashdump.c)
 *     DifMmAllocateMappingAddressWrapper @ 0x140669810 (DifMmAllocateMappingAddressWrapper.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140CB6140 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140CB6404 (HalpDmaAllocateReservedMapping.c)
 *     PspIumInitialize @ 0x140CDF4BC (PspIumInitialize.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x140AF4820 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
