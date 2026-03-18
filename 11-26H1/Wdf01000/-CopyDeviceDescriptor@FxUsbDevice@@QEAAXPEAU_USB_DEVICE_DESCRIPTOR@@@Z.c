/*
 * XREFs of ?CopyDeviceDescriptor@FxUsbDevice@@QEAAXPEAU_USB_DEVICE_DESCRIPTOR@@@Z @ 0x14009D15C
 * Callers:
 *     imp_WdfUsbTargetDeviceGetDeviceDescriptor @ 0x14009DA40 (imp_WdfUsbTargetDeviceGetDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

void __fastcall FxUsbDevice::CopyDeviceDescriptor(FxUsbDevice *this, _USB_DEVICE_DESCRIPTOR *UsbDeviceDescriptor)
{
  *UsbDeviceDescriptor = this->m_DeviceDescriptor;
}
