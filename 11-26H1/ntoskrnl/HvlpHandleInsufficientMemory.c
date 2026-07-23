/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x140533814
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
 *     HvlpDepositPages @ 0x1405107E8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1)
{
  char v1; // r8

  v1 = 1;
  if ( a1 != 117 )
    v1 = a1 == 130;
  return HvlpDepositPages(0, 129LL, v1, (unsigned __int16)(a1 - 129) <= 1u);
}
