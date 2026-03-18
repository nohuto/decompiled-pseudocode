/*
 * XREFs of UsbhFdoSetD0Warm @ 0x140037E34
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusResume @ 0x140009A74 (UsbhSyncBusResume.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhWaitForPortResume @ 0x140011070 (UsbhWaitForPortResume.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x140034344 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhResumeHardReset @ 0x14003A324 (UsbhResumeHardReset.c)
 *     UsbhFlushPortChange @ 0x14003B818 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhFdoSetD0Warm(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // r13
  int v5; // edi
  __int16 v6; // bp
  unsigned __int16 v7; // si
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  _DWORD *v13; // rax
  _DWORD *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 i; // si
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 v27; // si
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // r15d
  __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // rax
  struct _DEVICE_OBJECT *v35; // rbp
  _DWORD *v36; // rax
  _DWORD *v37; // r14
  __int64 v38; // r9
  int v39; // eax
  __int64 v41; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v42; // [rsp+58h] [rbp-40h]
  int v43; // [rsp+B0h] [rbp+18h] BYREF
  int v44; // [rsp+B8h] [rbp+20h] BYREF

  LODWORD(v41) = 0;
  v43 = 0;
  v42 = FdoExt((__int64)DeviceObject);
  v4 = v42;
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
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START);
  v7 = 1;
  if ( !*((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
    goto LABEL_26;
  do
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, v7, v8, v9);
    if ( PortData )
    {
      v5 = UsbhQueryPortState((__int64)DeviceObject, v7, (__int64)&v43, &v44);
      if ( v5 >= 0 )
      {
        v11 = UsbhLatchPdo((__int64)DeviceObject, v7, 0LL, 0x574D5253u);
        v12 = v11;
        if ( v11 )
        {
          v13 = PdoExt(v11);
          v14 = v13;
          if ( (v43 & 1) == 0 )
            goto LABEL_19;
          if ( (v43 & 0x10000) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, v7, 0LL);
            v5 = UsbhFlushPortChange(DeviceObject, v7, &v44);
            if ( v5 >= 0 )
            {
              v15 = v14[355];
              if ( (v15 & 0x8000000) == 0 )
                v14[355] = v15 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v43 & 2) != 0 || (v16 = v13[355], (v16 & 0x8000000) != 0) )
          {
LABEL_19:
            if ( (v43 & 0x10000) != 0 || (v43 & 1) != 0 )
              goto LABEL_13;
            *(_DWORD *)(PortData + 2408) |= 4u;
            v17 = 2003985971;
          }
          else
          {
            v17 = 2003985970;
            v14[355] = v16 | 0x4000;
          }
          Log((__int64)DeviceObject, 16, v17, v7, 0LL);
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v12, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        if ( (v43 & 0x10000) == 0 && (v43 & 1) != 0 )
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
  v4 = v42;
  v6 = 1;
LABEL_26:
  Log((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  UsbhSyncBusResume((__int64)DeviceObject, a2, v18, v19);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    v23 = UsbhGetPortData((__int64)DeviceObject, i, v21, v22);
    if ( v23 )
    {
      v5 = UsbhWaitForPortResume(DeviceObject, v23, a2, v24);
      if ( (v5 & 0xC0000000) == 0xC0000000 )
      {
        UsbhEtwLogHubIrpEvent(
          (__int64)DeviceObject,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_PORT_RESUME_ERROR);
        v6 = 1;
        break;
      }
    }
    v6 = 1;
  }
  if ( (v5 & 0xC0000000) != 0xC0000000 )
  {
    UsbhWait((__int64)DeviceObject, 0xAu);
    v5 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, (unsigned int *)&v41, v25, v26);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      v27 = 1;
      if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        do
        {
          v30 = UsbhGetPortData((__int64)DeviceObject, v27, v28, v29);
          if ( v30 )
          {
            v31 = 0;
            if ( (*(_DWORD *)(v30 + 2408) & 4) != 0 )
            {
              Log((__int64)DeviceObject, 16, 2003989347, v27, 0LL);
              *(_DWORD *)(v32 + 2408) &= ~4u;
              LOBYTE(v33) = v6;
              UsbhQueueSoftConnectChange(DeviceObject, v27, a2, v33);
            }
            else
            {
              v34 = UsbhLatchPdo((__int64)DeviceObject, v27, 0LL, 0x574D5253u);
              v35 = (struct _DEVICE_OBJECT *)v34;
              if ( !v34 )
                goto LABEL_45;
              v36 = PdoExt(v34);
              v37 = v36 + 355;
              if ( (v36[358] & 0x1000) != 0 || (*v37 & 0x4000) != 0 )
              {
                *v37 &= ~0x4000u;
                *v37 |= 0x2000000u;
                PdoExt((__int64)v35);
                UsbhEtwLogHubIrpEvent(
                  (__int64)DeviceObject,
                  0LL,
                  0LL,
                  &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME);
                PdoExt((__int64)v35);
                v31 = UsbhSyncResetDeviceInternal(DeviceObject);
                if ( (*v37 & 4) != 0 )
                  UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v35, 0x220FA7u);
              }
              UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v35, 0LL, 0x574D5253u);
              if ( (v31 & 0xC0000000) == 0xC0000000 )
              {
                Log((__int64)DeviceObject, 16, 1466782291, 0LL, v31);
                v6 = v38 + 1;
                LOBYTE(v38) = v38 + 1;
                UsbhQueueSoftConnectChange(DeviceObject, v27, a2, v38);
                UsbhException((__int64)DeviceObject, 0, 138, 0LL, 0, v31, 0, usbfile_fdopwr_c, 3694, 0, v41);
              }
              else
              {
LABEL_45:
                v6 = 1;
              }
            }
          }
          v27 += v6;
        }
        while ( v27 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
        v4 = v42;
      }
      v39 = v4[640];
      if ( (v39 & 0x10) != 0 )
      {
        v4[640] = v39 & 0xFFFFFFEF;
        UsbhException((__int64)DeviceObject, 0, 113, 0LL, 0, 0, 0, usbfile_fdopwr_c, 3709, 0);
        v5 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset(DeviceObject, a2);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE);
  return (unsigned int)v5;
}
