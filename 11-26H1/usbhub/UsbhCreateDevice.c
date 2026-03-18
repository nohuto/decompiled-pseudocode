/*
 * XREFs of UsbhCreateDevice @ 0x14001016C
 * Callers:
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14001D870 (UsbhEtwLogHubEventWithExtraData.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140030108 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x140038888 (UsbhGetDeviceHandle.c)
 *     UsbhGetTtDeviceHandle @ 0x1400472F8 (UsbhGetTtDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1400492D4 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhLinkPdoDeviceHandle @ 0x14005CE80 (UsbhLinkPdoDeviceHandle.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhCreateDevice(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r10
  int v16; // edi
  unsigned int TtDeviceHandle; // r14d
  _DWORD *v19; // r9
  _DWORD *v20; // r8
  unsigned int i; // edx
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-B9h]
  __int64 v25; // [rsp+38h] [rbp-A1h]
  unsigned __int16 v26[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v27; // [rsp+54h] [rbp-85h]
  __int64 DeviceHandle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v29; // [rsp+60h] [rbp-79h] BYREF
  __int64 v30; // [rsp+68h] [rbp-71h]
  __int64 v31; // [rsp+70h] [rbp-69h]
  _DWORD v32[24]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v30 = a2;
  v7 = a4;
  v27 = a3;
  memset(&v32[1], 0, 0x50uLL);
  v31 = v4;
  DeviceHandle = 0LL;
  v26[0] = 0;
  v8 = (unsigned int)v4;
  Log(a1, 4, 1668441412, (unsigned int)v4, v7);
  v12 = FdoExt(a1, v9, v10, v11);
  v13 = PdoExt(a2);
  v14 = 0xFEFEFEFEFEFEFEFEuLL;
  v29 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v8 & 0x400) != 0 )
  {
LABEL_8:
    v15 = DeviceHandle;
LABEL_9:
    if ( *(_QWORD *)(v12 + 4256) )
    {
      v32[0] = 1;
      if ( *(_WORD *)(v12 + 4226) < 7u )
      {
        LOWORD(v24) = v7;
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, int, _DWORD *, unsigned __int16))(v12 + 4256))(
                *(_QWORD *)(v12 + 4232),
                &v29,
                v15,
                v27,
                v24,
                v32,
                v26[0]);
      }
      else
      {
        v19 = (_DWORD *)(v13 + 2688);
        *(_DWORD *)(v13 + 2692) = *(unsigned __int16 *)(v12 + 5208);
        v20 = (_DWORD *)(v13 + 2696);
        *(_OWORD *)(v13 + 2696) = 0LL;
        *(_DWORD *)(v13 + 2712) = 0;
        if ( *(_WORD *)(v12 + 5208) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v22 = *(unsigned __int16 *)(v12 + 2LL * (i - 1) + 5210);
            if ( !(_WORD)v22 )
              break;
            *v20++ = v22;
          }
        }
        else
        {
          i = 0;
        }
        *v19 = i + 1;
        v25 = v30;
        v19[i + 1] = v7;
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, __int64, _DWORD *, unsigned __int16, __int64, __int64))(v12 + 4488))(
                *(_QWORD *)(v12 + 4232),
                &v29,
                DeviceHandle,
                v27,
                v13 + 2688,
                v32,
                v26[0],
                v25,
                v13 + 2672);
      }
      v16 = v23;
      if ( DeviceHandle )
        Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a1, 1212445810LL);
      if ( (v16 & 0xC0000000) == 0xC0000000 )
      {
        if ( v32[1] == 5 )
          *(_DWORD *)(v13 + 2820) = v32[2] != 0 ? 1073807365 : 1073807360;
        Log(a1, 4, 1667524129, v8, v7);
        UsbhException(a1, (unsigned __int16)v7, 4, (unsigned int)v32, 84, v16, -1, (__int64)usbfile_bus_c, 6536, 0);
        UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_DEVICE_FAILURE, (unsigned int)v7, v32, 84);
        v29 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v14 = v29;
      }
      if ( v16 >= 0 )
      {
        v16 = UsbhLinkPdoDeviceHandle(a1, v30, v14);
        if ( (v16 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 4, 1819175713, v29, v7);
          Usbh_HubRemoveUsbDevice(a1, v29);
        }
      }
    }
    else
    {
      v16 = -1073741822;
      if ( v15 )
        Usbh_HubDerefDeviceHandle(a1, v15, a1, 1212445810LL);
    }
    return (unsigned int)v16;
  }
  if ( (*(_DWORD *)(v12 + 2560) & 0x40) == 0 )
  {
    Log(a1, 4, 1668441139, (unsigned int)v8, v7);
    TtDeviceHandle = UsbhGetTtDeviceHandle(a1, &DeviceHandle, a1, v26);
    Log(a1, 4, 1668441140, DeviceHandle, v26[0]);
    if ( (TtDeviceHandle & 0xC0000000) == 0xC0000000 )
    {
      UsbhException(a1, (unsigned __int16)v7, 104, 0, 0, TtDeviceHandle, -1, (__int64)usbfile_bus_c, 6435, 0);
      return TtDeviceHandle;
    }
    v8 = v31;
    goto LABEL_8;
  }
  Log(a1, 4, 1668441137, (unsigned int)v8, v7);
  DeviceHandle = UsbhGetDeviceHandle(a1, a1);
  v26[0] = v7;
  Log(a1, 4, 1668441138, DeviceHandle, v7);
  v15 = DeviceHandle;
  if ( DeviceHandle )
    goto LABEL_9;
  v16 = -1073741823;
  UsbhException(a1, (unsigned __int16)v7, 5, 0, 0, -1073741823, -1, (__int64)usbfile_bus_c, 6416, 0);
  return (unsigned int)v16;
}
