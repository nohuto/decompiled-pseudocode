/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1404F7010
 * Callers:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140C3ADE0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C3AEC0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140C3CBD0 (VfMiscIoInitializeWorkItem_Entry.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  return (unsigned int)MiGetSystemRegionType((unsigned __int64)VirtualAddress) != 5;
}
