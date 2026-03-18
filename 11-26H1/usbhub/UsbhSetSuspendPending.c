/*
 * XREFs of UsbhSetSuspendPending @ 0x140006794
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSetSuspendPending(__int64 a1, struct _KEVENT *a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // si

  v6 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 4944);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  v8 = v7;
  if ( a2[29].Header.LockNV == 2 )
  {
    KeReleaseSpinLock(v6, v7);
  }
  else
  {
    a2[29].Header.LockNV = 2;
    KeResetEvent(a2 + 31);
    KeReleaseSpinLock(v6, v8);
    UsbhSetPcqEventStatus(a1, a2, 0LL, 10LL);
  }
}
