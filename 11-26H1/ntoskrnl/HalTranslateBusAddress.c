/*
 * XREFs of HalTranslateBusAddress @ 0x140481B70
 * Callers:
 *     IopTranslateBusAddress @ 0x1407A99FC (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x14083D758 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140CB4938 (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return guard_dispatch_icall_no_overrides(5LL, *(_QWORD *)&BusNumber);
  *TranslatedAddress = BusAddress;
  return 1;
}
