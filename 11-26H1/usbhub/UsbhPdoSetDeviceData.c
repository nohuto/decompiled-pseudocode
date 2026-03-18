/*
 * XREFs of UsbhPdoSetDeviceData @ 0x1400105DC
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1148478835LL);
  v7 = result;
  if ( result )
  {
    Log(a1, 32, 1936028740, 0LL, result);
    v11 = FdoExt(a1, v8, v9, v10);
    if ( *(_QWORD *)(v11 + 4376) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 4376))(*(_QWORD *)(v11 + 4232), v7, a2);
    return UsbhDerefPdoDeviceHandle(a1, v7, a3, 1148478835LL);
  }
  return result;
}
