/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1400488F4
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x140002A30 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400398C0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x14003A400 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x140047ED8 (UsbhPortResumeTimeout.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x140016858 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhRefPdoDeviceHandle @ 0x140017B50 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140017E00 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhFreeID @ 0x14001A68C (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x14001A728 (UsbhGetSerialNumber.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhWaitForBootDevice @ 0x14002D150 (UsbhWaitForBootDevice.c)
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14003F07C (WPP_RECORDER_SF_qd.c)
 *     UsbhPCE_QueueDriverReset @ 0x1400443C0 (UsbhPCE_QueueDriverReset.c)
 *     Usbh_HubRestoreDevice @ 0x140049784 (Usbh_HubRestoreDevice.c)
 *     UsbhLinkPdoDeviceHandle @ 0x14005C8A0 (UsbhLinkPdoDeviceHandle.c)
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
  __int64 PortData; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r15
  __int64 v22; // rbx
  int v23; // r10d
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v28; // [rsp+28h] [rbp-90h]
  __int64 v29; // [rsp+30h] [rbp-88h]
  KSPIN_LOCK *v30; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+20h]

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
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0);
  v9 = (KSPIN_LOCK *)(v8 + 1292);
  v30 = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *((_QWORD *)v6 + 108) )
  {
    Log((__int64)DeviceObject, 4, 1380214068, 0LL, *((_QWORD *)v6 + 108));
    KeReleaseSpinLock(v9, v10);
    LODWORD(v17) = -2147483631;
    goto LABEL_56;
  }
  v6[218] = -1;
  *((_QWORD *)v6 + 108) = &Event;
  *((_QWORD *)v6 + 110) = KeGetCurrentThread();
  KeReleaseSpinLock(v9, v10);
  v11 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 0x48446C6Fu);
  UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740898, 0);
  Log((__int64)DeviceObject, 4, 1869374568, 0LL, v11);
  Usbh_SSH_Event(DeviceObject, v12 + 6, a2);
  v13 = *((_WORD *)v6 + 714);
  v6[355] &= ~0x8000u;
  UsbhPCE_QueueDriverReset((__int64)DeviceObject, v13, 0x20000LL, a2, a3);
  Log((__int64)DeviceObject, 4, 1380218740, 0LL, 0LL);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((_WORD *)v6 + 714));
  UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, &Event, 0, 1380210548, 0xBu, PortData);
  v17 = (int)v6[218];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v29) = v6[218];
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      v16,
      0x49u,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      a3,
      v29);
  }
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 4, 1380214124, 0LL, v17);
    UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740856, 1);
    if ( v11 )
    {
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 0x48446C6Fu);
    }
    if ( !Usb_Disconnected(v17) )
      UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 67, 0LL, 0, v17, -1, usbfile_bus_c, 6928, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v29) = v17;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        v19,
        0x4Au,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        a3,
        v29);
    }
  }
  else
  {
    UsbhAcquireEnumBusLock(DeviceObject, a2, *((_WORD *)v6 + 714));
    v34 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 0x4844776Eu);
    if ( v34 )
    {
      if ( v11 )
      {
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 0x48446C6Fu);
        Log((__int64)DeviceObject, 4, 1381192786, v11, v34);
        v20 = Usbh_HubRestoreDevice(DeviceObject, a3, v11, v34);
        v21 = v20;
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( v20 < 0 )
          {
            v4 = v20 == -1073741823;
          }
          else if ( (v6[355] & 0x204) == 0x200 )
          {
            *(_OWORD *)Length = 0LL;
            UsbhGetSerialNumber((__int64)DeviceObject, a3, (__int64)Length);
            if ( HIDWORD(Length[0]) == v6[533] )
            {
              if ( Length[1] )
              {
                v22 = HIDWORD(Length[0]);
                if ( RtlCompareMemory((const void *)Length[1], *((const void **)v6 + 267), HIDWORD(Length[0])) != v22 )
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
        Log((__int64)DeviceObject, 4, 1380217445, 0LL, v21);
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v34, a3, 0x4844776Eu);
        if ( (v21 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 66, 0LL, 0, v21, -1, usbfile_bus_c, 7007, 0);
          UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740899, 1);
          UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        }
      }
      else
      {
        Log((__int64)DeviceObject, 4, 1380216684, 0LL, v17);
        LODWORD(v21) = v23;
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v34, a3, 0x4844776Eu);
      }
      LODWORD(v17) = v21;
      if ( (int)v21 >= 0 )
      {
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_14006F6C8 )
            {
              if ( (v6[355] & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v17) = UsbhQueueWorkItemEx(
                                 (__int64)DeviceObject,
                                 1u,
                                 (__int64)UsbhUpdateRegSurpriseRemovalCount,
                                 (__int64)&byte_14006F6C8,
                                 *((unsigned __int16 *)v6 + 714),
                                 0x774D5153u,
                                 0LL);
                if ( (v17 & 0xC0000000) == 0xC0000000 )
                {
                  byte_14006F6C8 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LODWORD(v28) = v17;
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1u,
                        0x4Bu,
                        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                        v28);
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
      UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 0x48446C6Fu);
      LODWORD(v17) = -1073741823;
    }
    UsbhReleaseEnumBusLockEx((__int64)DeviceObject, a2, *((_WORD *)v6 + 714));
    v9 = v30;
  }
  v24 = KeAcquireSpinLockRaiseToDpc(v9);
  *((_QWORD *)v6 + 108) = 0LL;
  KeReleaseSpinLock(v9, v24);
  if ( !v4 )
    goto LABEL_52;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v25,
      3u,
      0x4Cu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      DeviceObject);
  Log((__int64)DeviceObject, 4, 1397905220, (int)v17, (__int64)DeviceObject);
  UsbhWaitForBootDevice((char)DeviceObject, a3, -1, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v26,
        3u,
        0x4Du,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        DeviceObject);
LABEL_52:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v28) = v17;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x4Eu,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v28);
    }
  }
LABEL_56:
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, v17);
  return (unsigned int)v17;
}
