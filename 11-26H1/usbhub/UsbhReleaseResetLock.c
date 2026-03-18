/*
 * XREFs of UsbhReleaseResetLock @ 0x140039FA4
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Disabled @ 0x140037A80 (Usbh_HRS_Disabled.c)
 *     Usbh_HRS_Paused @ 0x14004C72C (Usbh_HRS_Paused.c)
 *     Usbh_HRS_PausedWaitDone @ 0x14004C868 (Usbh_HRS_PausedWaitDone.c)
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 *     Usbh_HRS_ResetStop @ 0x14004CC28 (Usbh_HRS_ResetStop.c)
 *     Usbh_HRS_WaitDone @ 0x14004CD44 (Usbh_HRS_WaitDone.c)
 *     Usbh_HRS_WaitReady @ 0x14004CE3C (Usbh_HRS_WaitReady.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhReleaseResetLock(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KSEMAPHORE *v5; // rax
  __int64 Limit; // rcx

  v5 = (struct _KSEMAPHORE *)FdoExt(a1);
  v5[87].Limit = a3;
  *(_DWORD *)(a2 + 68) = a3;
  *(_DWORD *)(a2 + 64) = 1734964085;
  Limit = (unsigned int)v5[28].Limit;
  v5[41].Header.WaitListHead.Flink = 0LL;
  v5[Limit + 29].Header.SignalState = a3;
  KeReleaseSemaphore(v5 + 88, 16, 1, 0);
  return a3;
}
