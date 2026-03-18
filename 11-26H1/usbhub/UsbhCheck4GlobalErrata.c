/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x14005AB28
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x140031854 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x14005AA34 (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1400706D4 )
    result = UsbhApplyDeviceFix(a1, a2, 3);
  if ( dword_1400706D8 )
    return UsbhApplyDeviceFix(a1, a2, 4);
  return result;
}
