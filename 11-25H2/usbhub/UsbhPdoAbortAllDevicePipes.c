/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x140017908
 * Callers:
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x140017B50 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140017E00 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  _DWORD *v6; // rax

  result = UsbhRefPdoDeviceHandle(a1, a2, a2, 1148346977LL);
  v5 = result;
  if ( result )
  {
    v6 = FdoExt(a1);
    if ( *((_QWORD *)v6 + 564) )
      (*((void (__fastcall **)(_QWORD, __int64))v6 + 564))(*((_QWORD *)v6 + 529), v5);
    return UsbhDerefPdoDeviceHandle(a1, v5, a2, 1148346977LL);
  }
  return result;
}
