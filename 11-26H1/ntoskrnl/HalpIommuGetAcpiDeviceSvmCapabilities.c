/*
 * XREFs of HalpIommuGetAcpiDeviceSvmCapabilities @ 0x14058E5FC
 * Callers:
 *     HalpIommuBusInterfaceGetSvmCapabilities @ 0x14058E3D8 (HalpIommuBusInterfaceGetSvmCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuGetAcpiDeviceSvmCapabilities(_QWORD *a1, unsigned int *a2)
{
  bool v2; // zf
  __int64 result; // rax
  unsigned int v5; // ecx
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v2 = HalpHvIommu == 0;
  v6 = 0LL;
  *a2 = 0;
  if ( v2 )
    return 3221225474LL;
  result = guard_dispatch_icall_no_overrides(*a1, &v6);
  if ( (int)result < 0 )
    return 3221225485LL;
  if ( (v6 & 0x200) != 0 )
  {
    _BitScanReverse(&v5, DWORD1(v6));
    result = (unsigned int)result;
    *a2 = *a2 & 0xFFFFFF07 | (8 * (v5 & 0x1F)) | 4;
  }
  return result;
}
