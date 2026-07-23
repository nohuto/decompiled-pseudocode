/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78
 * Callers:
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1402F3BA0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1402F4990 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlAttachPasidSpace @ 0x1405BE3F0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405BE4A0 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x1405BE5C0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405BE680 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405BE920 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405BEA00 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405BEFB0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405BF0D0 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x1405BFEF0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1405C05C0 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x1405C0860 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x1405C0900 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x1405C0B30 (HvlSetPasidAddressSpace.c)
 *     HvlMapDmaRanges @ 0x1405C1560 (HvlMapDmaRanges.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140794978 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  bool result; // al

  result = 1;
  if ( a1 != 117 && a1 != 11 )
    return (unsigned __int16)(a1 - 129) <= 1u;
  return result;
}
