/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x14059EA18
 * Callers:
 *     HalpIommuCreateDevice @ 0x14051AC18 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140587958 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnregisterDeviceId(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
