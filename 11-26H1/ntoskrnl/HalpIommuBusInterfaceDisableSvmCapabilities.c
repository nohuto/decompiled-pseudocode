/*
 * XREFs of HalpIommuBusInterfaceDisableSvmCapabilities @ 0x14058BBE0
 * Callers:
 *     IommupDeviceDisableSvm @ 0x140B6494C (IommupDeviceDisableSvm.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuBusInterfaceDisableSvmCapabilities(__int64 a1)
{
  if ( **(_DWORD **)a1 == 2 )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 280), a1 + 376);
}
