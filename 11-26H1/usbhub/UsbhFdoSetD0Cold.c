/*
 * XREFs of UsbhFdoSetD0Cold @ 0x140030750
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhHubStart @ 0x140050D10 (UsbhHubStart.c)
 * Callees:
 *     UsbhSyncBusResume @ 0x140009A74 (UsbhSyncBusResume.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhFdoColdStartPdo @ 0x140030D10 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x140031278 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncPowerOnPorts @ 0x140031538 (UsbhSyncPowerOnPorts.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhResetHubUpstreamPort @ 0x14004C494 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x14004C544 (UsbhResetNotifyCompletion.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(PDEVICE_OBJECT DeviceObject, __int64 a2, char a3)
{
  _DWORD *v6; // r15
  int v7; // eax
  int started; // edi
  int v9; // r8d
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  unsigned __int16 i; // si
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 PortData; // r14
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // r8
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int16 j; // si
  __int64 v25; // rax
  __int64 v26; // rbp
  _DWORD *v27; // r14
  unsigned __int16 k; // si
  __int64 v29; // r15
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rax
  _DWORD *v33; // rbp
  int v34; // eax
  __int64 v35; // rax
  int v37; // [rsp+40h] [rbp-38h]

  v6 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1668246628, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START);
  if ( a3 && (v7 = UsbhResetHubUpstreamPort(DeviceObject), started = v7, (v7 & 0xC0000000) == 0xC0000000) )
  {
    if ( !Usb_Disconnected(v7) )
    {
      v9 = 54;
      v37 = 3281;
LABEL_8:
      UsbhException((__int64)DeviceObject, 0, v9, 0LL, 0, started, 0, usbfile_fdopwr_c, v37, 0);
    }
  }
  else
  {
    FdoExt((__int64)DeviceObject);
    Log((__int64)DeviceObject, 2048, 1346458174, 0LL, 0LL);
    v11 = UsbhDispatch_BusEvent(DeviceObject, a2, (unsigned int)(v10 + 10), v10);
    Log((__int64)DeviceObject, 2048, 1346458172, 0LL, v11);
    v12 = UsbhSyncPowerOnPorts(DeviceObject);
    started = v12;
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      if ( Usb_Disconnected(v12) )
        goto LABEL_46;
      v9 = 53;
      v37 = 3305;
      goto LABEL_8;
    }
    UsbhWait((__int64)DeviceObject, 0x64u);
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
    {
      PortData = UsbhGetPortData((__int64)DeviceObject, i, v14, v15);
      if ( PortData )
      {
        v18 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x434F4C44u);
        v19 = *(unsigned __int16 *)(PortData + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( DeviceObject )
          {
            DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
            if ( DeviceExtension )
            {
              v21 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
              v22 = *((_DWORD *)DeviceExtension + 221);
              v23 = *((_QWORD *)DeviceExtension + 111);
              v17 = 32LL * ((v21 - 1) & v22);
              *(_DWORD *)(v17 + v23) = 828664931;
              *(_QWORD *)(v17 + v23 + 8) = 0LL;
              *(_QWORD *)(v17 + v23 + 16) = v19;
              *(_QWORD *)(v17 + v23 + 24) = v18;
            }
          }
        }
        if ( v18 )
        {
          started = UsbhFdoColdStartPdo(DeviceObject, a2, v18, PortData);
          if ( (started & 0xC0000000) == 0xC0000000 )
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v18, 0LL, 0x434F4C44u);
            break;
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v18, 0LL, 0x434F4C44u);
        }
        else
        {
          started = UsbhFdoColdStartCheckPort(DeviceObject, v17, PortData);
          if ( (started & 0xC0000000) == 0xC0000000 )
            break;
        }
      }
    }
    UsbhSyncBusResume((__int64)DeviceObject, a2, v14, v15);
    if ( *((_BYTE *)v6 + 5268) )
    {
      for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++j )
      {
        v25 = UsbhLatchPdo((__int64)DeviceObject, j, 0LL, 0x434C4432u);
        v26 = v25;
        if ( v25 )
        {
          v27 = PdoExt(v25);
          if ( *((_BYTE *)v27 + 2740) )
          {
            started = UsbhSyncResetDeviceInternal(DeviceObject);
            if ( started < 0 )
            {
              UsbhQueueSoftConnectChange(DeviceObject, j, a2, 1LL);
              v27[355] &= ~0x4000u;
              UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE);
              UsbhUnlatchPdo((__int64)DeviceObject, v26, 0LL, 0x434C4432u);
              return (unsigned int)started;
            }
            UsbhResetNotifyCompletion(*(_QWORD *)(a2 + 8));
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v26, 0LL, 0x434C4432u);
        }
      }
    }
    for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++k )
    {
      v29 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x434C4432u);
      Log((__int64)DeviceObject, 16, 1919249969, k, v29);
      if ( v29 )
      {
        v32 = PdoExt(v29);
        v33 = v32;
        if ( !*((_BYTE *)v32 + 2740) && (v32[355] & 0x4000) != 0 )
        {
          Log((__int64)DeviceObject, 16, 1346654803, 0LL, 0LL);
          UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET);
          v34 = UsbhSyncResetDeviceInternal(DeviceObject);
          started = v34;
          if ( (v34 & 0xC0000000) == 0xC0000000 )
          {
            Log((__int64)DeviceObject, 16, 1919249970, 0LL, v34);
            UsbhQueueSoftConnectChange(DeviceObject, k, a2, 1LL);
            v33[355] &= ~0x4000u;
            UsbhException((__int64)DeviceObject, 0, 88, 0LL, 0, started, 0, usbfile_fdopwr_c, 3452, 0);
            started = 0;
          }
          else
          {
            v33[355] &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v29, 0LL, 0x434C4432u);
      }
      else
      {
        v35 = UsbhGetPortData((__int64)DeviceObject, k, v30, v31);
        if ( *(_BYTE *)(v35 + 2841) )
        {
          *(_BYTE *)(v35 + 2841) = 0;
          UsbhQueueSoftConnectChange(DeviceObject, k, a2, 0LL);
        }
      }
    }
  }
LABEL_46:
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE);
  return (unsigned int)started;
}
