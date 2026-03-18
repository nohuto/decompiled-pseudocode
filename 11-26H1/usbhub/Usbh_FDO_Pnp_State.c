/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x1400518D4
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhAddDevice @ 0x14004F580 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1400507C0 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StartDevice @ 0x1400509D0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x140050BF0 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x140050C80 (UsbhFdoPnp_SurpriseRemove.c)
 *     UsbhInitCallbackWorker @ 0x140051070 (UsbhInitCallbackWorker.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhAcquireFdoPnpLock @ 0x140028330 (UsbhAcquireFdoPnpLock.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_FDO_Pnp_State(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 result; // rax

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1398031678, *((_QWORD *)v4 + 171), v3);
  UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v3, 0, 0);
  *((_QWORD *)v4 + 169) = *(_QWORD *)(a1 + 24);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 171))(a1, (unsigned int)v3);
  *((_QWORD *)v4 + 169) = 0LL;
  return result;
}
