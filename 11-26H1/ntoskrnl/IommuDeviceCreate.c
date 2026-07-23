/*
 * XREFs of IommuDeviceCreate @ 0x140789730
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     HalpIommuFreeDeviceId @ 0x14058E5E4 (HalpIommuFreeDeviceId.c)
 *     IommupCreateDeviceId @ 0x1405A25CC (IommupCreateDeviceId.c)
 */

__int64 __fastcall IommuDeviceCreate(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  int DeviceId; // ebx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // eax
  void *Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  Src = 0LL;
  v13 = 0LL;
  DeviceId = IommupCreateDeviceId((__int64)a1, a2, (__int64 *)&Src);
  if ( DeviceId >= 0 )
  {
    v10 = HalpIommuCreateDevice((__int64)Src, a1, a2, 0LL, &v13);
    DeviceId = v10;
    if ( v10 >= 0 )
    {
      *a3 = v13;
      return (unsigned int)DeviceId;
    }
    if ( v10 == -1073741776 || v10 == -1073741811 )
      DeviceId = -1073741584;
  }
  if ( v13 )
    HalpIommuDeleteDevice((__int64 *)v13, v6, v8, v9);
  if ( Src )
    HalpIommuFreeDeviceId((__int64)Src);
  return (unsigned int)DeviceId;
}
