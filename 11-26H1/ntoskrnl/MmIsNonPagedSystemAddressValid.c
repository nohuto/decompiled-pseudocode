/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1404F0620
 * Callers:
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140C40DF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C40ED0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140C42BE0 (VfMiscIoInitializeWorkItem_Entry.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 5;
}
