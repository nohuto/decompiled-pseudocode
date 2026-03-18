/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1400116C0
 * Callers:
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1400370A0 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306034, 0LL, result);
    *(_DWORD *)(v6 + 1784) = 1;
    v12 = FdoExt(a1, v9, v10, v11);
    if ( *(_QWORD *)(v12 + 4480) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v12 + 4480))(*(_QWORD *)(v12 + 4232), v8, 1LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232364915LL);
  }
  return result;
}
