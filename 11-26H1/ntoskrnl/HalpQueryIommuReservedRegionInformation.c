/*
 * XREFs of HalpQueryIommuReservedRegionInformation @ 0x140784FAC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuGetDeviceId @ 0x1404F04C0 (HalpIommuGetDeviceId.c)
 *     HalpIommuFreeDeviceId @ 0x14058E5E4 (HalpIommuFreeDeviceId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuLocateFromDevice @ 0x140784EE0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall HalpQueryIommuReservedRegionInformation(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int DeviceId; // ebx
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  ULONG_PTR *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0x10 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = 0LL;
  DeviceId = HalpIommuGetDeviceId(v4, &v7);
  if ( DeviceId >= 0 )
  {
    DeviceId = HalpIommuLocateFromDevice(v7, &v8);
    if ( DeviceId >= 0 )
    {
      if ( v8 )
      {
        if ( v8[39] )
          *(_BYTE *)(a1 + 8) = guard_dispatch_icall_no_overrides(v7, v6);
        else
          DeviceId = -1073741595;
      }
      else
      {
        DeviceId = -1073741810;
      }
    }
  }
  if ( v7 )
    HalpIommuFreeDeviceId(v7);
  return (unsigned int)DeviceId;
}
