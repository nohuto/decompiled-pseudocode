/*
 * XREFs of UsbhSetPdoIdleReady @ 0x140017984
 * Callers:
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001634C (UsbhIdleIrp_NoIrp.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140034DF0 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x140017B50 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140017E00 (UsbhDerefPdoDeviceHandle.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306034, 0, result);
    v6[446] = 1;
    v9 = FdoExt(a1);
    if ( *((_QWORD *)v9 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v9 + 560))(*((_QWORD *)v9 + 529), v8, 1LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232364915LL);
  }
  return result;
}
