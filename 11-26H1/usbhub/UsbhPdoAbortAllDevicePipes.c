/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x140011644
 * Callers:
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax

  result = UsbhRefPdoDeviceHandle(a1, a2, a2, 1148346977LL);
  v8 = result;
  if ( result )
  {
    v9 = FdoExt(a1, v5, v6, v7);
    if ( *(_QWORD *)(v9 + 4512) )
      (*(void (__fastcall **)(_QWORD, __int64))(v9 + 4512))(*(_QWORD *)(v9 + 4232), v8);
    return UsbhDerefPdoDeviceHandle(a1, v8, a2, 1148346977LL);
  }
  return result;
}
