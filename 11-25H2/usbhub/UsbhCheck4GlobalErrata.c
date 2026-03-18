/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x14005A5AC
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x140018314 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhApplyDeviceFix @ 0x14005A4B8 (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_14006F674 )
    result = UsbhApplyDeviceFix(a1, a2, 3);
  if ( dword_14006F678 )
    return UsbhApplyDeviceFix(a1, a2, 4);
  return result;
}
