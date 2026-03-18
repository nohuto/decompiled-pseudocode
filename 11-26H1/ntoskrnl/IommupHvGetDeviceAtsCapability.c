/*
 * XREFs of IommupHvGetDeviceAtsCapability @ 0x14059E3A4
 * Callers:
 *     IommuGetAtsSettings @ 0x1404FA5C0 (IommuGetAtsSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvGetDeviceAtsCapability(__int64 a1, bool *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  result = guard_dispatch_icall_no_overrides(a1, &v4);
  if ( (int)result >= 0 )
  {
    *a2 = (v4 & 0x40) != 0;
    return 0LL;
  }
  return result;
}
