/*
 * XREFs of UsbhFdoColdStartPdo @ 0x140030D10
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhWaitForBootDevice @ 0x140031424 (UsbhWaitForBootDevice.c)
 *     UsbhFlushPortChange @ 0x14003B818 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhFdoColdStartPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // r13
  _DWORD *v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // al
  const void *v19; // r9
  unsigned int v20; // r10d
  __int64 v21; // rcx
  signed __int32 v23; // eax
  int v24; // eax
  bool v25; // al
  const void *v26; // r9
  int v27; // r8d
  char v28; // dl
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // r14
  int v36; // eax
  int v37; // ecx
  bool v38; // zf
  bool v39; // al
  __int64 v40; // r8
  __int64 v41; // rcx
  signed __int32 v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  _DWORD *v46; // rax
  int v47; // r10d
  int v48; // [rsp+40h] [rbp-20h]
  int v49; // [rsp+50h] [rbp-10h] BYREF
  int v50; // [rsp+54h] [rbp-Ch]
  int v51; // [rsp+A8h] [rbp+48h] BYREF

  v51 = 0;
  v49 = 0;
  v8 = FdoExt(a1);
  v9 = PdoExt(a3);
  v10 = UsbhQueryPortState(a1, *(_WORD *)(a4 + 4), (__int64)&v51, &v49);
  v11 = *(unsigned __int16 *)(a4 + 4);
  v12 = v10;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v50 = 827352163;
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 880), 0xFFFFFFFF);
        v15 = *(_DWORD *)(v13 + 884);
        v16 = *(_QWORD *)(v13 + 888);
        v17 = 32LL * ((v14 - 1) & v15);
        *(_DWORD *)(v17 + v16) = v50;
        *(_QWORD *)(v17 + v16 + 8) = 0LL;
        *(_QWORD *)(v17 + v16 + 16) = v11;
        *(_QWORD *)(v17 + v16 + 24) = v12;
      }
    }
  }
  if ( (v12 & 0xC0000000) != 0xC0000000 )
  {
    if ( *((_BYTE *)v9 + 2740) )
    {
      LOWORD(v23) = v51;
      if ( (v51 & 1) != 0 )
        goto LABEL_19;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          3,
          26,
          (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
          a1);
      Log(a1, 16, 1397899853, 0LL, a1);
      UsbhWaitForBootDevice(a1, a3, 1LL, 0xFFFFFFFFLL);
      v24 = UsbhQueryPortState(a1, *(_WORD *)(a4 + 4), (__int64)&v51, &v49);
      LODWORD(v12) = v24;
      if ( (v24 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1668035397, 0LL, v24);
        v25 = Usb_Disconnected(v12);
        v21 = a1;
        if ( v25 )
          goto LABEL_7;
        v27 = 48;
        v48 = 3127;
LABEL_31:
        UsbhException(v21, *(_WORD *)(a4 + 4), v27, v26, 0, v12, v49, usbfile_fdopwr_c, v48, 0);
        return (unsigned int)v12;
      }
    }
    LOWORD(v23) = v51;
LABEL_19:
    v28 = BYTE2(v51);
    v29 = HIWORD(v51);
    v30 = (unsigned __int16)v23;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v50 = 825320547;
          v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 880), 0xFFFFFFFF);
          v32 = *(_DWORD *)(v31 + 884);
          v33 = *(_QWORD *)(v31 + 888);
          v34 = 32LL * ((v23 - 1) & v32);
          *(_DWORD *)(v34 + v33) = v50;
          *(_QWORD *)(v34 + v33 + 8) = 0LL;
          *(_QWORD *)(v34 + v33 + 16) = v30;
          *(_QWORD *)(v34 + v33 + 24) = v29;
          LOBYTE(v23) = v51;
          v28 = BYTE2(v51);
        }
      }
    }
    if ( (v23 & 1) == 0 )
    {
      Log(a1, 16, 1667518516, *(unsigned __int16 *)(a4 + 4), 0LL);
      if ( (v51 & 0x10000) != 0 )
      {
        LODWORD(v12) = v47;
      }
      else
      {
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_DISCONNECT);
        UsbhException(a1, *(_WORD *)(a4 + 4), 127, 0LL, 0, 0, 0, usbfile_fdopwr_c, 3204, 0);
        UsbhQueueSoftConnectChange(a1, *(unsigned __int16 *)(a4 + 4), a2, 0LL);
        Log(a1, 16, 1667518517, *(unsigned __int16 *)(a4 + 4), (int)v12);
      }
      return (unsigned int)v12;
    }
    if ( (v28 & 1) == 0 )
    {
      if ( (v9[355] & 0x8000000) == 0 )
      {
        v40 = *(unsigned __int16 *)(a4 + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v41 = *(_QWORD *)(a1 + 64);
            if ( v41 )
            {
              v50 = 860906595;
              v42 = _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 880), 0xFFFFFFFF);
              v43 = *(_DWORD *)(v41 + 884);
              v44 = *(_QWORD *)(v41 + 888);
              v45 = 32LL * ((v42 - 1) & v43);
              *(_DWORD *)(v45 + v44) = v50;
              *(_QWORD *)(v45 + v44 + 8) = 0LL;
              *(_QWORD *)(v45 + v44 + 16) = v40;
              *(_QWORD *)(v45 + v44 + 24) = 0LL;
            }
          }
        }
        v46 = PdoExt(a3);
        v46[355] |= 0x4000u;
        LODWORD(v12) = 0;
      }
      return (unsigned int)v12;
    }
    Log(a1, 16, 1667518514, *(unsigned __int16 *)(a4 + 4), 0LL);
    v35 = PdoExt(a3);
    v36 = UsbhFlushPortChange(a1, *(unsigned __int16 *)(a4 + 4), &v49);
    LODWORD(v12) = v36;
    if ( v36 >= 0 )
    {
      v37 = v35[355];
      if ( (v37 & 0x8000000) == 0 )
      {
        v38 = v35[596] == 1;
        v35[355] = v37 | 0x4000;
        if ( v38 )
        {
          UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_LOST_POWER);
          UsbhException(a1, *(_WORD *)(a4 + 4), 114, 0LL, 0, v12, v49, usbfile_fdopwr_c, 3163, 0);
          v35[596] = v8[1054];
        }
        return (unsigned int)v12;
      }
    }
    v39 = Usb_Disconnected(v36);
    v21 = a1;
    if ( v39 )
      goto LABEL_7;
    v26 = 0LL;
    v48 = 3179;
    v27 = 52;
    goto LABEL_31;
  }
  Log(a1, 16, 1668035141, 0LL, v12);
  v18 = Usb_Disconnected(v12);
  v21 = a1;
  if ( v18 )
  {
LABEL_7:
    UsbhEtwLogHubIrpEvent(v21, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT);
    return 0LL;
  }
  UsbhException(a1, *(_WORD *)(a4 + 4), 48, v19, v20, v12, v49, usbfile_fdopwr_c, 3086, v20);
  return (unsigned int)v12;
}
