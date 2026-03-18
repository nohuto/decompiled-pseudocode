/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x1400513E4
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhAddDevice @ 0x14004F060 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1400502E0 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StartDevice @ 0x1400504F0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x140050710 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x1400507A0 (UsbhFdoPnp_SurpriseRemove.c)
 *     UsbhInitCallbackWorker @ 0x140050B90 (UsbhInitCallbackWorker.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAcquireFdoPnpLock @ 0x140030180 (UsbhAcquireFdoPnpLock.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
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
