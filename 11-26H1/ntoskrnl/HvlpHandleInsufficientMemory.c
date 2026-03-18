/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x140531314
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
 *     HvlpDepositPages @ 0x140516D78 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1)
{
  char v1; // r8

  v1 = 1;
  if ( a1 != 117 )
    v1 = a1 == 130;
  return HvlpDepositPages(0, 129LL, v1, (unsigned __int16)(a1 - 129) <= 1u);
}
