/*
 * XREFs of UsbhCreateDevice @ 0x140012398
 * Callers:
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000A9B0 (UsbhEtwLogHubEventWithExtraData.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140034810 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhGetDeviceHandle @ 0x140039684 (UsbhGetDeviceHandle.c)
 *     UsbhGetTtDeviceHandle @ 0x1400477AC (UsbhGetTtDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x140049748 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhLinkPdoDeviceHandle @ 0x14005C8A0 (UsbhLinkPdoDeviceHandle.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhCreateDevice(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  int v8; // r14d
  _DWORD *v9; // rdi
  _DWORD *v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // r10
  int v13; // edi
  unsigned int TtDeviceHandle; // r14d
  _DWORD *v16; // r9
  _DWORD *v17; // r8
  unsigned int i; // edx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-B9h]
  __int64 v22; // [rsp+38h] [rbp-A1h]
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v24; // [rsp+54h] [rbp-85h]
  __int64 DeviceHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-79h] BYREF
  __int64 v27; // [rsp+68h] [rbp-71h]
  __int64 v28; // [rsp+70h] [rbp-69h]
  _DWORD v29[24]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v27 = a2;
  v7 = a4;
  v24 = a3;
  memset(&v29[1], 0, 0x50uLL);
  v28 = v4;
  DeviceHandle = 0LL;
  v23[0] = 0;
  v8 = v4;
  Log(a1, 4, 1668441412, v4, v7);
  v9 = FdoExt(a1);
  v10 = PdoExt(a2);
  v11 = 0xFEFEFEFEFEFEFEFEuLL;
  v26 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v8 & 0x400) != 0 )
  {
LABEL_8:
    v12 = DeviceHandle;
LABEL_9:
    if ( *((_QWORD *)v9 + 532) )
    {
      v29[0] = 1;
      if ( *((_WORD *)v9 + 2113) < 7u )
      {
        LOWORD(v21) = v7;
        v20 = (*((__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64, _QWORD, int, _DWORD *, unsigned __int16))v9
               + 532))(
                *((_QWORD *)v9 + 529),
                &v26,
                v12,
                v24,
                v21,
                v29,
                v23[0]);
      }
      else
      {
        v16 = v10 + 672;
        v10[673] = *((unsigned __int16 *)v9 + 2604);
        v17 = v10 + 674;
        *(_OWORD *)(v10 + 674) = 0LL;
        v10[678] = 0;
        if ( *((_WORD *)v9 + 2604) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v19 = *((unsigned __int16 *)v9 + i + 2604);
            if ( !(_WORD)v19 )
              break;
            *v17++ = v19;
          }
        }
        else
        {
          i = 0;
        }
        *v16 = i + 1;
        v22 = v27;
        v16[i + 1] = v7;
        v20 = (*((__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64, _QWORD, _DWORD *, _DWORD *, unsigned __int16, __int64, _DWORD *))v9
               + 561))(
                *((_QWORD *)v9 + 529),
                &v26,
                DeviceHandle,
                v24,
                v10 + 672,
                v29,
                v23[0],
                v22,
                v10 + 668);
      }
      v13 = v20;
      if ( DeviceHandle )
        Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a1, 1212445810LL);
      if ( (v13 & 0xC0000000) == 0xC0000000 )
      {
        if ( v29[1] == 5 )
          v10[705] = v29[2] != 0 ? 1073807365 : 1073807360;
        Log(a1, 4, 1667524129, v8, v7);
        UsbhException(a1, v7, 4, v29, 0x54u, v13, -1, usbfile_bus_c, 6536, 0);
        UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_DEVICE_FAILURE);
        v26 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v11 = v26;
      }
      if ( v13 >= 0 )
      {
        v13 = UsbhLinkPdoDeviceHandle(a1, v27, v11);
        if ( (v13 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 4, 1819175713, v26, v7);
          Usbh_HubRemoveUsbDevice(a1, v26);
        }
      }
    }
    else
    {
      v13 = -1073741822;
      if ( v12 )
        Usbh_HubDerefDeviceHandle(a1, v12, a1, 1212445810LL);
    }
    return (unsigned int)v13;
  }
  if ( (v9[640] & 0x40) == 0 )
  {
    Log(a1, 4, 1668441139, v8, v7);
    TtDeviceHandle = UsbhGetTtDeviceHandle(a1, &DeviceHandle, a1, v23);
    Log(a1, 4, 1668441140, DeviceHandle, v23[0]);
    if ( (TtDeviceHandle & 0xC0000000) == 0xC0000000 )
    {
      UsbhException(a1, v7, 104, 0LL, 0, TtDeviceHandle, -1, usbfile_bus_c, 6435, 0);
      return TtDeviceHandle;
    }
    v8 = v28;
    goto LABEL_8;
  }
  Log(a1, 4, 1668441137, v8, v7);
  DeviceHandle = UsbhGetDeviceHandle(a1, a1);
  v23[0] = v7;
  Log(a1, 4, 1668441138, DeviceHandle, v7);
  v12 = DeviceHandle;
  if ( DeviceHandle )
    goto LABEL_9;
  v13 = -1073741823;
  UsbhException(a1, v7, 5, 0LL, 0, -1073741823, -1, usbfile_bus_c, 6416, 0);
  return (unsigned int)v13;
}
