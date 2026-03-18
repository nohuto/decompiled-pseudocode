/*
 * XREFs of HalpIommuBusInterfaceEnableSvmCapabilities @ 0x14058BC18
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078268C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuBusInterfaceEnableSvmCapabilities(__int64 a1)
{
  if ( **(_DWORD **)a1 == 2 )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 280), a1 + 376);
}
