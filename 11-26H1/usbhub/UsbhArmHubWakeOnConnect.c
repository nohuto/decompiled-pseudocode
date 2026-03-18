/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x140006E74
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     UsbhSetHubRemoteWake @ 0x140006EC8 (UsbhSetHubRemoteWake.c)
 *     UsbhArmHubForWakeDetect @ 0x1400070A0 (UsbhArmHubForWakeDetect.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx

  result = FdoExt(DeviceObject, a2, a3, a4);
  v6 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject);
    LOBYTE(v7) = 1;
    result = UsbhSetHubRemoteWake(DeviceObject, v7);
    if ( (int)result >= 0 )
      *(_DWORD *)(v6 + 2560) |= 0x80000u;
  }
  return result;
}
