/*
 * XREFs of Usbh_UsbdInterfaceDereference @ 0x14003E2E0
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x14003C084 (UsbhGetDeviceBusInfo.c)
 *     UsbhBusIfRemoveDevice @ 0x140057770 (UsbhBusIfRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall Usbh_UsbdInterfaceDereference(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
