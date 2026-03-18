/*
 * XREFs of UsbhSshExitSx @ 0x14002B8E0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
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
