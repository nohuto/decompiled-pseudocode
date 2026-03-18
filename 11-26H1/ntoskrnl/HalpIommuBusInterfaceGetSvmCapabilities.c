/*
 * XREFs of HalpIommuBusInterfaceGetSvmCapabilities @ 0x14058BC58
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078268C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     HalpIommuGetAcpiDeviceSvmCapabilities @ 0x14058BE7C (HalpIommuGetAcpiDeviceSvmCapabilities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuBusInterfaceGetSvmCapabilities(__int64 a1, __int64 a2)
{
  if ( **(_DWORD **)a1 == 1 )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 280), a2);
  else
    return HalpIommuGetAcpiDeviceSvmCapabilities();
}
