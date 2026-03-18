/*
 * XREFs of UsbhPdoSetDeviceData @ 0x140017554
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x140017B50 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140017E00 (UsbhDerefPdoDeviceHandle.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax

  PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1148478835LL);
  v7 = result;
  if ( result )
  {
    Log(a1, 32, 1936028740, 0, result);
    v8 = FdoExt(a1);
    if ( *((_QWORD *)v8 + 547) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v8 + 547))(*((_QWORD *)v8 + 529), v7, a2);
    return UsbhDerefPdoDeviceHandle(a1, v7, a3, 1148478835LL);
  }
  return result;
}
