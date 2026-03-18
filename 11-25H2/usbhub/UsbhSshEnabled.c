/*
 * XREFs of UsbhSshEnabled @ 0x14005EA84
 * Callers:
 *     Usbh_FDO_WaitPnpRestart @ 0x1400515A0 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSshEnableDisable @ 0x14005E94C (UsbhSshEnableDisable.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 */

LONG __fastcall UsbhSshEnabled(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  v4 = FdoExt(a1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v4 + 412, 0LL);
  Log(a1, 0x10000, 1397244973, 0LL, (__int64)v5);
  UsbhDecHubBusy(a1, v6, v5);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v4 + 800), 2000, 0, a2, 0x77485353u);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
