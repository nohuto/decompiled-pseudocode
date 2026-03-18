/*
 * XREFs of UsbhSshExitSx @ 0x14002E7F0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 */

LONG __fastcall UsbhSshExitSx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  v4 = FdoExt(a1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v4 + 413, 0LL);
  Log(a1, 0x10000, 1213429805, 0LL, (__int64)v5);
  UsbhDecHubBusy(a1, v6, v5);
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (_DWORD)v4 + 3200, 2000, 0, a2, 2001228627);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
