/*
 * XREFs of UsbhGetHubDeviceInformation @ 0x14003CA10
 * Callers:
 *     UsbhInitialize @ 0x14003D130 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140030108 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubQueryDeviceInformation @ 0x140032AF4 (Usbh_HubQueryDeviceInformation.c)
 *     UsbhGetDeviceHandle @ 0x140038888 (UsbhGetDeviceHandle.c)
 *     UsbhValidateDeviceDescriptor @ 0x14003A018 (UsbhValidateDeviceDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhGetHubDeviceInformation(__int64 a1, _UNICODE_STRING *a2)
{
  _DWORD *v4; // r15
  __int64 DeviceHandle; // rbp
  unsigned int v7; // esi
  _DWORD *Pool2; // rax
  __int64 v9; // rdi
  int DeviceInformation; // esi
  __int128 v11; // xmm0
  __int64 v12; // r8
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0;
  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  v7 = 64;
  while ( 1 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v7, 1112885333LL);
    v9 = (__int64)Pool2;
    if ( !Pool2 )
    {
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, (__int64)a2, 0x48447472u);
      return 3221225626LL;
    }
    *Pool2 = 0;
    DeviceInformation = Usbh_HubQueryDeviceInformation(a1, DeviceHandle, (__int64)Pool2, v7, (__int64)&v14);
    if ( DeviceInformation != -1073741789 )
      break;
    v7 = *(_DWORD *)(v9 + 4);
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  Usbh_HubDerefDeviceHandle(a1, DeviceHandle, (__int64)a2, 0x48447472u);
  if ( DeviceInformation >= 0 )
  {
    v4[633] = *(_DWORD *)(v9 + 44);
    v4[634] = *(_DWORD *)(v9 + 40);
    v11 = *(_OWORD *)(v9 + 12);
    v13 = 0;
    *(_OWORD *)(v4 + 635) = v11;
    *((_WORD *)v4 + 1278) = *(_WORD *)(v9 + 28);
    Log(a1, 8, 1768842800, v9, (__int64)v4);
    Log(a1, 8, 1768842872, (int)v4[634], (int)v4[633]);
    if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v4 + 635), v12, &v13, 0LL) )
    {
      DeviceInformation = -1073741811;
      UsbhException(a1, 0, 64, v4 + 635, 0x12u, -1073741811, v13, usbfile_hub_c, 4205, 0);
    }
  }
  ExFreePoolWithTag((PVOID)v9, 0);
  Log(a1, 8, 1768842814, DeviceInformation, 0LL);
  return (unsigned int)DeviceInformation;
}
