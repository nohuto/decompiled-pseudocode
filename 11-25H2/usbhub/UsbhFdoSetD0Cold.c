/*
 * XREFs of UsbhFdoSetD0Cold @ 0x14002C4AC
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     UsbhHubStart @ 0x140050830 (UsbhHubStart.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSyncBusResume @ 0x14002AAB4 (UsbhSyncBusResume.c)
 *     UsbhFdoColdStartPdo @ 0x14002CA60 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x14002CFB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncPowerOnPorts @ 0x14002D264 (UsbhSyncPowerOnPorts.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhResetHubUpstreamPort @ 0x14004C8C0 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x14004C970 (UsbhResetNotifyCompletion.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(PDEVICE_OBJECT DeviceObject, __int64 a2, char a3)
{
  _DWORD *v6; // r15
  int v7; // eax
  int started; // edi
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  int v12; // eax
  unsigned __int16 i; // si
  __int64 PortData; // r14
  void *DeviceExtension; // rdx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int16 j; // si
  __int64 v20; // rax
  __int64 v21; // rbp
  _DWORD *v22; // r14
  unsigned __int16 k; // si
  __int64 v24; // r15
  _DWORD *v25; // rax
  _DWORD *v26; // rbp
  int v27; // r9d
  int v28; // eax
  __int64 v29; // rax
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  int v35; // [rsp+40h] [rbp-38h]

  v6 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1668246628, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  LODWORD(v34) = 0;
  LODWORD(v31) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, v31);
  if ( a3 && (v7 = UsbhResetHubUpstreamPort(DeviceObject), started = v7, (v7 & 0xC0000000) == 0xC0000000) )
  {
    if ( !Usb_Disconnected(v7) )
    {
      v9 = 54;
      v35 = 3281;
LABEL_8:
      UsbhException((__int64)DeviceObject, 0, v9, 0LL, 0, started, 0, usbfile_fdopwr_c, v35, 0);
    }
  }
  else
  {
    FdoExt((__int64)DeviceObject);
    Log((__int64)DeviceObject, 2048, 1346458174, 0LL, 0LL);
    v11 = UsbhDispatch_BusEvent(DeviceObject, a2, v10 + 10);
    Log((__int64)DeviceObject, 2048, 1346458172, 0LL, v11);
    v12 = UsbhSyncPowerOnPorts(DeviceObject);
    started = v12;
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      if ( Usb_Disconnected(v12) )
        goto LABEL_46;
      v9 = 53;
      v35 = 3305;
      goto LABEL_8;
    }
    UsbhWait((__int64)DeviceObject, 0x64u);
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
    {
      PortData = UsbhGetPortData((__int64)DeviceObject, i);
      if ( PortData )
      {
        v16 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x434F4C44u);
        v17 = *(unsigned __int16 *)(PortData + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( DeviceObject )
          {
            DeviceExtension = DeviceObject->DeviceExtension;
            if ( DeviceExtension )
            {
              v18 = *((_QWORD *)DeviceExtension + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
              *(_DWORD *)v18 = 828664931;
              *(_QWORD *)(v18 + 8) = 0LL;
              *(_QWORD *)(v18 + 16) = v17;
              *(_QWORD *)(v18 + 24) = v16;
            }
          }
        }
        if ( v16 )
        {
          started = UsbhFdoColdStartPdo(DeviceObject, a2, v16, PortData);
          if ( (started & 0xC0000000) == 0xC0000000 )
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v16, 0LL, 0x434F4C44u);
            break;
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v16, 0LL, 0x434F4C44u);
        }
        else
        {
          started = UsbhFdoColdStartCheckPort(DeviceObject, DeviceExtension, PortData);
          if ( (started & 0xC0000000) == 0xC0000000 )
            break;
        }
      }
    }
    UsbhSyncBusResume(DeviceObject, a2);
    if ( *((_BYTE *)v6 + 5268) )
    {
      for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++j )
      {
        v20 = UsbhLatchPdo((__int64)DeviceObject, j, 0LL, 0x434C4432u);
        v21 = v20;
        if ( v20 )
        {
          v22 = PdoExt(v20);
          if ( *((_BYTE *)v22 + 2740) )
          {
            started = UsbhSyncResetDeviceInternal(DeviceObject);
            if ( started < 0 )
            {
              UsbhQueueSoftConnectChange(DeviceObject, j, a2, 1LL);
              v22[355] &= ~0x4000u;
              LODWORD(v32) = 0;
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE,
                v32,
                started);
              UsbhUnlatchPdo((__int64)DeviceObject, v21, 0LL, 0x434C4432u);
              return (unsigned int)started;
            }
            UsbhResetNotifyCompletion(*(_QWORD *)(a2 + 8));
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v21, 0LL, 0x434C4432u);
        }
      }
    }
    for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++k )
    {
      v24 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x434C4432u);
      Log((__int64)DeviceObject, 16, 1919249969, k, v24);
      if ( v24 )
      {
        v25 = PdoExt(v24);
        v26 = v25;
        if ( !*((_BYTE *)v25 + 2740) && (v25[355] & 0x4000) != 0 )
        {
          Log((__int64)DeviceObject, 16, 1346654803, 0LL, 0LL);
          LODWORD(v34) = v27 & v34;
          LODWORD(v33) = *((unsigned __int16 *)v26 + 714);
          UsbhEtwLogHubIrpEvent(
            (__int64)DeviceObject,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
            v33);
          v28 = UsbhSyncResetDeviceInternal(DeviceObject);
          started = v28;
          if ( (v28 & 0xC0000000) == 0xC0000000 )
          {
            Log((__int64)DeviceObject, 16, 1919249970, 0LL, v28);
            UsbhQueueSoftConnectChange(DeviceObject, k, a2, 1LL);
            v26[355] &= ~0x4000u;
            UsbhException((__int64)DeviceObject, 0, 88, 0LL, 0, started, 0, usbfile_fdopwr_c, 3452, 0);
            started = 0;
          }
          else
          {
            v26[355] &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v24, 0LL, 0x434C4432u);
      }
      else
      {
        v29 = UsbhGetPortData((__int64)DeviceObject, k);
        if ( *(_BYTE *)(v29 + 2841) )
        {
          *(_BYTE *)(v29 + 2841) = 0;
          UsbhQueueSoftConnectChange(DeviceObject, k, a2, 0LL);
        }
      }
    }
  }
LABEL_46:
  LODWORD(v34) = started;
  LODWORD(v32) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, v32, v34);
  return (unsigned int)started;
}
