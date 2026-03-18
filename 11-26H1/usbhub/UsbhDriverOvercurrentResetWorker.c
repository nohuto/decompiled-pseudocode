/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x14003F9F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002C0D4 (UsbhReferenceListAdd.c)
 *     Usbh__TestPoint__Ulong @ 0x1400367D4 (Usbh__TestPoint__Ulong.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003F924 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003FFD0 (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhDriverOvercurrentResetWorker(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject);
  if ( (int)Usbh__TestPoint__Ulong((__int64)DeviceObject, 8u, 0, a2) < 0
    || (int)UsbhReferenceListAdd((__int64)DeviceObject, a3, 1466196847) < 0 )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, (unsigned __int16)a2, v6, v7);
    Usbh_OvercurrentDerefHubBusy(DeviceObject, PortData, 0LL);
  }
  else
  {
    UsbhDeviceOvercurrentPopup(DeviceObject, a2);
    UsbhReferenceListRemove((__int64)DeviceObject, a3);
  }
}
