/*
 * XREFs of IommupHvRegisterDeviceId @ 0x1405A1090
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvRegisterDeviceId(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = _InterlockedIncrement(&HalpHvLogicalId);
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    return 3221225626LL;
  result = guard_dispatch_icall_no_overrides(a1, v3);
  if ( (int)result >= 0 )
    *a2 = v3;
  return result;
}
