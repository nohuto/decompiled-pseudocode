/*
 * XREFs of UsbhSshDisabled @ 0x14005EE90
 * Callers:
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1400507C0 (UsbhFdoPnp_RemoveDevice.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051E30 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSshEnableDisable @ 0x14005EF90 (UsbhSshEnableDisable.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 */

LONG __fastcall UsbhSshDisabled(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // rdx

  v4 = FdoExt(a1);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 1766093683, 1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  Log(
    a1,
    0x10000,
    1397244971,
    _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 412, (signed __int64)v5, 0LL),
    (__int64)v5);
  if ( v7 )
  {
    Log(a1, v8, 1396978221, v7, (__int64)v5);
    UsbhDecHubBusy(a1, v9, v5);
  }
  UsbhDisableTimerObject(a1, (__int64)(v4 + 800), v6, v7);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
