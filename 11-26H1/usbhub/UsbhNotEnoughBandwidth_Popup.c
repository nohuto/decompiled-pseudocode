/*
 * XREFs of UsbhNotEnoughBandwidth_Popup @ 0x140056AE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054F90 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNotEnoughBandwidth_Popup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *EventData; // rbx
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject);
  v4 = (_DWORD *)UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  EventData = v4;
  if ( v4 )
  {
    *v4 = 1;
    PortData = UsbhGetPortData((__int64)DeviceObject, *(unsigned __int16 *)(a2 + 20), v5, v6);
    if ( PortData )
      EventData[2] = *(_DWORD *)(PortData + 436);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v4;
}
