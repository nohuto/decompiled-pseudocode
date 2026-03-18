/*
 * XREFs of UsbhAcquireFdoPnpLock @ 0x140028330
 * Callers:
 *     UsbhIoctlGetDescriptorForPDO @ 0x1400275B4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEtwRundown @ 0x140028180 (UsbhEtwRundown.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1400430C0 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1400431A4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 *     Usbh_FDO_Pnp_State @ 0x1400518D4 (Usbh_FDO_Pnp_State.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireFdoPnpLock(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _DWORD *v8; // rbx
  __int64 v9; // rcx

  v8 = FdoExt(a1);
  KeWaitForSingleObject(v8 + 1240, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 56) = v8[340];
  *(_DWORD *)(a2 + 60) = a3;
  *(_DWORD *)(a2 + 48) = 827278406;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  *((_QWORD *)v8 + 166) = a2;
  if ( a5 )
  {
    v9 = ((unsigned __int8)v8[6] + 1) & 7;
    v8[6] = v9;
    v9 *= 32LL;
    *(_DWORD *)((char *)v8 + v9 + 28) = a3;
    *(_DWORD *)((char *)v8 + v9 + 32) = v8[340];
    *(_DWORD *)((char *)v8 + v9 + 36) = v8[340];
    *(_DWORD *)((char *)v8 + v9 + 40) = a4;
  }
  return (unsigned int)v8[340];
}
