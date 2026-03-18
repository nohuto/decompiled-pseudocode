/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98
 * Callers:
 *     HvlpSetPowerProperty @ 0x1403E672C (HvlpSetPowerProperty.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1403E6CC0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1403E7AB0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlAttachPasidSpace @ 0x1405BBB80 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405BBC30 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x1405BBD50 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x1405BBE10 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405BC0B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x1405BC190 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405BC740 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405BC860 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x1405BD680 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1405BDD50 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x1405BDFF0 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x1405BE090 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x1405BE2C0 (HvlSetPasidAddressSpace.c)
 *     HvlMapDmaRanges @ 0x1405BECF0 (HvlMapDmaRanges.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140791E48 (HvlpDynamicUpdateMicrocode.c)
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
