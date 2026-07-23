/*
 * XREFs of IommupHvIsDmarStageCompatible @ 0x1405A0E84
 * Callers:
 *     HalpIommuDeviceGetDomainTypes @ 0x14058A2B8 (HalpIommuDeviceGetDomainTypes.c)
 *     HalpIommuDmaRemappingCapable @ 0x14058FEB0 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall IommupHvIsDmarStageCompatible(_DWORD *a1, char a2)
{
  bool v3; // zf
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a2 )
    v3 = HalpHvParaVirtIommuDomain == 0;
  else
    v3 = HalpHvIommuDeviceDomain == 0;
  if ( !v3 && *a1 == 1 && (int)guard_dispatch_icall_no_overrides(a1, &v5) >= 0 )
  {
    if ( a2 )
      return (v5 & 0x20) != 0;
    if ( (v5 & 0x10) != 0 )
      return 1;
  }
  return 0;
}
