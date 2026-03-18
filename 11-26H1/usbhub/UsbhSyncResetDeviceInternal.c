/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x140048448
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x1400163A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039E34 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x140047A28 (UsbhPortResumeTimeout.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1400081E4 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhAcquireEnumBusLock @ 0x14000A5D8 (UsbhAcquireEnumBusLock.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     UsbhWaitForBootDevice @ 0x140031424 (UsbhWaitForBootDevice.c)
 *     UsbhGetSerialNumber @ 0x1400389E8 (UsbhGetSerialNumber.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14003EB5C (WPP_RECORDER_SF_qd.c)
 *     UsbhPCE_QueueDriverReset @ 0x140043EE4 (UsbhPCE_QueueDriverReset.c)
 *     Usbh_HubRestoreDevice @ 0x140049310 (Usbh_HubRestoreDevice.c)
 *     UsbhLinkPdoDeviceHandle @ 0x14005CE80 (UsbhLinkPdoDeviceHandle.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  bool v4; // r14
  _DWORD *v6; // rbp
  __int64 v7; // r8
  _DWORD *v8; // r15
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // bl
  __int64 v11; // r12
  int v12; // r9d
  unsigned __int16 v13; // dx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 PortData; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // r9
  int v27; // r10d
  KIRQL v28; // al
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h]
  KSPIN_LOCK *v34; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v6 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x47u,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v7,
        0x48u,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        *((unsigned __int16 *)v6 + 714),
        a3);
  }
  v8 = FdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0LL);
  v9 = (KSPIN_LOCK *)(v8 + 1292);
  v34 = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *((_QWORD *)v6 + 108) )
  {
    Log((__int64)DeviceObject, 4, 1380214068, 0LL, *((_QWORD *)v6 + 108));
    KeReleaseSpinLock(v9, v10);
    LODWORD(v20) = -2147483631;
    goto LABEL_56;
  }
  v6[218] = -1;
  *((_QWORD *)v6 + 108) = &Event;
  *((_QWORD *)v6 + 110) = KeGetCurrentThread();
  KeReleaseSpinLock(v9, v10);
  v11 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 1212443759LL);
  UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740898LL, 0LL);
  Log((__int64)DeviceObject, 4, 1869374568, 0LL, v11);
  Usbh_SSH_Event((__int64)DeviceObject, v12 + 6, a2);
  v13 = *((_WORD *)v6 + 714);
  v6[355] &= ~0x8000u;
  UsbhPCE_QueueDriverReset((__int64)DeviceObject, v13, 0x20000LL, a2, a3);
  Log((__int64)DeviceObject, 4, 1380218740, 0LL, 0LL);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((unsigned __int16 *)v6 + 714), v14, v15);
  UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, &Event, 0, 1380210548, 0xBu, PortData);
  v20 = (int)v6[218];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v33) = v6[218];
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      0x49u,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      a3,
      v33);
  }
  if ( (v20 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 4, 1380214124, 0LL, v20);
    UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740856LL, 1LL);
    if ( v11 )
    {
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 1212443759LL);
    }
    if ( !Usb_Disconnected(v20) )
      UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 67, 0LL, 0, v20, -1, usbfile_bus_c, 6928, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v33) = v20;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        v22,
        0x4Au,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        a3,
        v33);
    }
  }
  else
  {
    UsbhAcquireEnumBusLock((__int64)DeviceObject, a2, *((unsigned __int16 *)v6 + 714), v19);
    v38 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 1212446574LL);
    if ( v38 )
    {
      if ( v11 )
      {
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 1212443759LL);
        Log((__int64)DeviceObject, 4, 1381192786, v11, v38);
        v23 = Usbh_HubRestoreDevice(DeviceObject, a3, v11, v38);
        v24 = v23;
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( v23 < 0 )
          {
            v4 = v23 == -1073741823;
          }
          else if ( (v6[355] & 0x204) == 0x200 )
          {
            *(_OWORD *)Length = 0LL;
            UsbhGetSerialNumber((__int64)DeviceObject, a3, (__int64)Length);
            if ( HIDWORD(Length[0]) == v6[533] )
            {
              if ( Length[1] )
              {
                v25 = HIDWORD(Length[0]);
                if ( RtlCompareMemory((const void *)Length[1], *((const void **)v6 + 267), HIDWORD(Length[0])) != v25 )
                  v4 = 1;
              }
            }
            else
            {
              v4 = 1;
            }
            UsbhFreeID((__int64)Length);
          }
        }
        Log((__int64)DeviceObject, 4, 1380217445, 0LL, v24);
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v38, a3, 1212446574LL);
        if ( (v24 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 66, 0LL, 0, v24, -1, usbfile_bus_c, 7007, 0);
          LOBYTE(v26) = 1;
          UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740899LL, v26);
          UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        }
      }
      else
      {
        Log((__int64)DeviceObject, 4, 1380216684, 0LL, v20);
        LODWORD(v24) = v27;
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v38, a3, 1212446574LL);
      }
      LODWORD(v20) = v24;
      if ( (int)v24 >= 0 )
      {
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_140070728 )
            {
              if ( (v6[355] & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v20) = UsbhQueueWorkItemEx(
                                 (__int64)DeviceObject,
                                 1u,
                                 (__int64)UsbhUpdateRegSurpriseRemovalCount,
                                 (__int64)&byte_140070728,
                                 *((unsigned __int16 *)v6 + 714),
                                 0x774D5153u,
                                 0LL);
                if ( (v20 & 0xC0000000) == 0xC0000000 )
                {
                  byte_140070728 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LODWORD(v32) = v20;
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1u,
                        0x4Bu,
                        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                        v32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Log((__int64)DeviceObject, 4, 1380200497, 0LL, v11);
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 1212443759LL);
      LODWORD(v20) = -1073741823;
    }
    UsbhReleaseEnumBusLockEx((__int64)DeviceObject, a2, *((_WORD *)v6 + 714));
    v9 = v34;
  }
  v28 = KeAcquireSpinLockRaiseToDpc(v9);
  *((_QWORD *)v6 + 108) = 0LL;
  KeReleaseSpinLock(v9, v28);
  if ( !v4 )
    goto LABEL_52;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v29,
      3u,
      0x4Cu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      DeviceObject);
  Log((__int64)DeviceObject, 4, 1397905220, (int)v20, (__int64)DeviceObject);
  UsbhWaitForBootDevice((char)DeviceObject, a3, -1, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v30,
        3u,
        0x4Du,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        DeviceObject);
LABEL_52:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v32) = v20;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x4Eu,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v32);
    }
  }
LABEL_56:
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    0LL,
    &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE,
    (unsigned int)v20);
  return (unsigned int)v20;
}
