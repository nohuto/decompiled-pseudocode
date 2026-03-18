/*
 * XREFs of UsbhSshEnterSx @ 0x14005F1A4
 * Callers:
 *     UsbhFdoSetPowerSx_Action @ 0x14004B27C (UsbhFdoSetPowerSx_Action.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 */

LONG __fastcall UsbhSshEnterSx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // rdx

  v4 = FdoExt(a1);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 2018734963, 1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  Log(
    a1,
    0x10000,
    1213429803,
    _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 413, (signed __int64)v5, 0LL),
    (__int64)v5);
  if ( v7 )
  {
    Log(a1, v8, 1213429810, v7, (__int64)v5);
    UsbhDecHubBusy(a1, v9, v5);
  }
  UsbhDisableTimerObject(a1, (__int64)(v4 + 800), v6, v7);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
