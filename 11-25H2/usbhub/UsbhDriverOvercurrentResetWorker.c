/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x14003FF00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x14001A6C4 (Usbh__TestPoint__Ulong.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002EFD0 (UsbhReferenceListAdd.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003FE34 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1400404F0 (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhDriverOvercurrentResetWorker(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject);
  if ( (int)Usbh__TestPoint__Ulong((__int64)DeviceObject, 8u, 0, a2) < 0
    || (int)UsbhReferenceListAdd((__int64)DeviceObject, a3, 1466196847) < 0 )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, a2);
    Usbh_OvercurrentDerefHubBusy(DeviceObject, PortData, 0LL);
  }
  else
  {
    UsbhDeviceOvercurrentPopup(DeviceObject, a2);
    UsbhReferenceListRemove((__int64)DeviceObject, a3);
  }
}
