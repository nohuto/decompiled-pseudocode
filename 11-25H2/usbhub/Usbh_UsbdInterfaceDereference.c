/*
 * XREFs of Usbh_UsbdInterfaceDereference @ 0x14003E830
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x14003C60C (UsbhGetDeviceBusInfo.c)
 *     UsbhBusIfRemoveDevice @ 0x140057210 (UsbhBusIfRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall Usbh_UsbdInterfaceDereference(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
