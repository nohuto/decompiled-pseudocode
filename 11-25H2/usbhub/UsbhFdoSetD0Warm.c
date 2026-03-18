/*
 * XREFs of UsbhFdoSetD0Warm @ 0x140038FD4
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusResume @ 0x14002AAB4 (UsbhSyncBusResume.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x14002E664 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhWaitForPortResume @ 0x140035AC8 (UsbhWaitForPortResume.c)
 *     UsbhResumeHardReset @ 0x14003A8C4 (UsbhResumeHardReset.c)
 *     UsbhFlushPortChange @ 0x14003BDA4 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhFdoSetD0Warm(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // r13
  int v5; // edi
  __int16 v6; // bp
  unsigned __int16 v7; // si
  __int64 PortData; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  int v13; // eax
  int v14; // eax
  int v15; // r8d
  unsigned __int16 i; // si
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int16 v19; // si
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // rax
  struct _DEVICE_OBJECT *v25; // rbp
  _DWORD *v26; // rax
  _DWORD *v27; // r14
  __int64 v28; // r9
  int v29; // eax
  __int64 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  unsigned int v34; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v35; // [rsp+58h] [rbp-40h]
  int v36; // [rsp+B0h] [rbp+18h] BYREF
  int v37; // [rsp+B8h] [rbp+20h] BYREF

  v34 = 0;
  v36 = 0;
  v35 = FdoExt((__int64)DeviceObject);
  v4 = v35;
  v5 = 0;
  Log((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  LODWORD(v31) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START, v31, 0);
  v7 = 1;
  if ( !*((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
    goto LABEL_26;
  do
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, v7);
    if ( PortData )
    {
      v5 = UsbhQueryPortState((__int64)DeviceObject, v7, (__int64)&v36, &v37);
      if ( v5 >= 0 )
      {
        v9 = UsbhLatchPdo((__int64)DeviceObject, v7, 0LL, 0x574D5253u);
        v10 = v9;
        if ( v9 )
        {
          v11 = PdoExt(v9);
          v12 = v11;
          if ( (v36 & 1) != 0 && (v36 & 0x10000) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, v7, 0LL);
            v5 = UsbhFlushPortChange(DeviceObject, v7, &v37);
            if ( v5 >= 0 )
            {
              v13 = v12[355];
              if ( (v13 & 0x8000000) == 0 )
                v12[355] = v13 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v36 & 3) != 1 || (v14 = v11[355], (v14 & 0x8000000) != 0) )
          {
            if ( (v36 & 0x10000) != 0 || (v36 & 1) != 0 )
              goto LABEL_13;
            *(_DWORD *)(PortData + 2408) |= 4u;
            v15 = 2003985971;
          }
          else
          {
            v15 = 2003985970;
            v12[355] = v14 | 0x4000;
          }
          Log((__int64)DeviceObject, 16, v15, v7, 0LL);
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v10, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        if ( (v36 & 0x10000) == 0 && (v36 & 1) != 0 )
        {
          *(_DWORD *)(PortData + 2408) |= 4u;
          Log((__int64)DeviceObject, 16, 2003985972, v7, 0LL);
        }
      }
    }
LABEL_24:
    ++v7;
  }
  while ( v7 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
  v4 = v35;
  v6 = 1;
LABEL_26:
  Log((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  UsbhSyncBusResume(DeviceObject, a2);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    v17 = UsbhGetPortData((__int64)DeviceObject, i);
    v18 = v17;
    if ( v17 )
    {
      v5 = UsbhWaitForPortResume(DeviceObject, v17, a2);
      if ( (v5 & 0xC0000000) == 0xC0000000 )
      {
        LODWORD(v33) = v5;
        LODWORD(v32) = *(unsigned __int16 *)(v18 + 4);
        UsbhEtwLogHubIrpEvent(
          (__int64)DeviceObject,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_PORT_RESUME_ERROR,
          v32,
          v33);
        v6 = 1;
        break;
      }
    }
    v6 = 1;
  }
  if ( (v5 & 0xC0000000) != 0xC0000000 )
  {
    UsbhWait((__int64)DeviceObject, 0xAu);
    v5 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v34);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      v19 = 1;
      if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        do
        {
          v20 = UsbhGetPortData((__int64)DeviceObject, v19);
          if ( v20 )
          {
            v21 = 0;
            if ( (*(_DWORD *)(v20 + 2408) & 4) != 0 )
            {
              Log((__int64)DeviceObject, 16, 2003989347, v19, 0LL);
              *(_DWORD *)(v22 + 2408) &= ~4u;
              LOBYTE(v23) = v6;
              UsbhQueueSoftConnectChange(DeviceObject, v19, a2, v23);
            }
            else
            {
              v24 = UsbhLatchPdo((__int64)DeviceObject, v19, 0LL, 0x574D5253u);
              v25 = (struct _DEVICE_OBJECT *)v24;
              if ( !v24 )
                goto LABEL_45;
              v26 = PdoExt(v24);
              v27 = v26 + 355;
              if ( (v26[358] & 0x1000) != 0 || (*v27 & 0x4000) != 0 )
              {
                *v27 &= ~0x4000u;
                *v27 |= 0x2000000u;
                LODWORD(v33) = 0;
                LODWORD(v32) = *((unsigned __int16 *)PdoExt((__int64)v25) + 714);
                UsbhEtwLogHubIrpEvent(
                  (__int64)DeviceObject,
                  0LL,
                  0LL,
                  &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME,
                  v32,
                  v33);
                PdoExt((__int64)v25);
                v21 = UsbhSyncResetDeviceInternal(DeviceObject);
                if ( (*v27 & 4) != 0 )
                  UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v25, 0x220FA7u);
              }
              UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v25, 0LL, 0x574D5253u);
              if ( (v21 & 0xC0000000) == 0xC0000000 )
              {
                Log((__int64)DeviceObject, 16, 1466782291, 0LL, v21);
                v6 = v28 + 1;
                LOBYTE(v28) = v28 + 1;
                UsbhQueueSoftConnectChange(DeviceObject, v19, a2, v28);
                UsbhException((__int64)DeviceObject, 0, 138, 0LL, 0, v21, 0, usbfile_fdopwr_c, 3694, 0);
              }
              else
              {
LABEL_45:
                v6 = 1;
              }
            }
          }
          v19 += v6;
        }
        while ( v19 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
        v4 = v35;
      }
      v29 = v4[640];
      if ( (v29 & 0x10) != 0 )
      {
        v4[640] = v29 & 0xFFFFFFEF;
        UsbhException((__int64)DeviceObject, 0, 113, 0LL, 0, 0, 0, usbfile_fdopwr_c, 3709, 0);
        v5 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset(DeviceObject, a2);
  LODWORD(v33) = v5;
  LODWORD(v32) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE, v32, v33);
  return (unsigned int)v5;
}
