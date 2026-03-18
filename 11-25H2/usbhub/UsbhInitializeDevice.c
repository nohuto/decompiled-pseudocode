/*
 * XREFs of UsbhInitializeDevice @ 0x14001CFD4
 * Callers:
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x14000A9B0 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhClearTt @ 0x1400467EC (UsbhClearTt.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhInitializeDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  unsigned int v9; // edi
  _DWORD v11[24]; // [rsp+60h] [rbp-98h] BYREF

  v6 = PdoExt(a2);
  FdoExt(a1);
  Log(a1, 4, 1768843588, *((_QWORD *)v6 + 145), *(unsigned __int16 *)(a3 + 4));
  memset(&v11[1], 0, 0x54uLL);
  if ( (FdoExt(a1)[640] & 0x8000000) != 0 )
    UsbhWait(a1, 0x32u);
  v11[0] = 1;
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( *((_QWORD *)v8 + 533) )
  {
    v9 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))v8 + 533))(
           *((_QWORD *)v8 + 529),
           *((_QWORD *)v7 + 145),
           v11);
    if ( (v9 & 0xC0000000) != 0xC0000000 )
      goto LABEL_11;
  }
  else
  {
    v9 = -1073741822;
  }
  if ( v11[1] == 1 )
  {
    v6[705] = 1073807361;
  }
  else if ( v11[1] == 3 )
  {
    v6[705] = v11[2] != 0 ? 1073807365 : 1073807360;
  }
  UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740856, 0);
  UsbhException(a1, *(_WORD *)(a3 + 4), 31, v11, 0x58u, v9, v11[5], usbfile_bus_c, 6644, 0);
  UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_FAILURE);
  UsbhClearTt(a1, a3, LOWORD(v11[3]));
LABEL_11:
  v6[355] &= ~0x40000000u;
  return v9;
}
