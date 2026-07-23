/*
 * XREFs of HalpIommuGetAcpiDeviceMapCount @ 0x140590134
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140505B10 (HalpIommuUnblockDevice.c)
 *     HalpIommuDmaRemappingCapable @ 0x14058FEB0 (HalpIommuDmaRemappingCapable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuGetAcpiDeviceMapCount(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  __int64 result; // rax

  v1 = (ULONG_PTR *)HalpIommuList;
  result = 0LL;
  while ( v1 != &HalpIommuList )
  {
    if ( v1[46] )
    {
      result = guard_dispatch_icall_no_overrides(v1[2], a1);
      if ( (_DWORD)result )
        break;
    }
    v1 = (ULONG_PTR *)*v1;
  }
  return result;
}
