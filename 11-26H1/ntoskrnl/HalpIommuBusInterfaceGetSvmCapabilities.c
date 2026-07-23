/*
 * XREFs of HalpIommuBusInterfaceGetSvmCapabilities @ 0x14058E3D8
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     HalpIommuGetAcpiDeviceSvmCapabilities @ 0x14058E5FC (HalpIommuGetAcpiDeviceSvmCapabilities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuBusInterfaceGetSvmCapabilities(__int64 a1, __int64 a2)
{
  if ( **(_DWORD **)a1 == 1 )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 280), a2);
  else
    return HalpIommuGetAcpiDeviceSvmCapabilities();
}
