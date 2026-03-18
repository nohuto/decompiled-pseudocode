/*
 * XREFs of UsbhLegacyDevicePopup @ 0x140056440
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054A10 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhLegacyDevicePopup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rax
  PVOID EventData; // r10

  Log((__int64)DeviceObject, 128, 1817531202, a2, 0LL);
  FdoExt((__int64)DeviceObject);
  v4 = (_DWORD *)UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  if ( v4 )
  {
    *v4 = 11;
    Log((__int64)DeviceObject, 128, 2003659084, a2, (__int64)v4);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v4;
}
