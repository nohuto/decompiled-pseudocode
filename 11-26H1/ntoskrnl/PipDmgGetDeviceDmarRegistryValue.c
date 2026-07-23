/*
 * XREFs of PipDmgGetDeviceDmarRegistryValue @ 0x140B3A9C8
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x140B3A940 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpGetRegistryDword @ 0x1404EE1C8 (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IoOpenDeviceRegistryKey @ 0x140A11740 (IoOpenDeviceRegistryKey.c)
 */

__int64 __fastcall PipDmgGetDeviceDmarRegistryValue(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  struct _DEVICE_OBJECT *v3; // rcx
  int RegistryDword; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  HANDLE DeviceRegKey; // [rsp+60h] [rbp+30h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  *a3 = 0;
  *a2 = 0;
  v9 = 0;
  DeviceRegKey = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  RegistryDword = IoOpenDeviceRegistryKey(v3, 1u, 0x20019u, &DeviceRegKey);
  if ( RegistryDword >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"DMA Management");
    RegistryDword = IopOpenRegistryKeyEx(&Handle, DeviceRegKey, &DestinationString, 0x20019u);
    if ( RegistryDword >= 0 )
    {
      PnpGetRegistryDword(Handle, (__int64)L"RemappingFlags", a2);
      RegistryDword = PnpGetRegistryDword(Handle, (__int64)L"RemappingSupported", &v9);
      if ( RegistryDword >= 0 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
            *a3 = 1;
          else
            RegistryDword = -1073741811;
        }
        else
        {
          *a3 = 0;
        }
      }
    }
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)RegistryDword;
}
