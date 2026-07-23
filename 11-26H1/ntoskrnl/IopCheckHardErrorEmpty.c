/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1405CCF60
 * Callers:
 *     IopHardErrorThread @ 0x140797730 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread);
  v1 = 0;
  IopPerfIoTrackingLock.Spare32 = 0LL;
  if ( *(struct _KTHREAD **)&IopPerfIoTrackingLock.SavedApcStateFill[40] == (struct _KTHREAD *)&IopPerfIoTrackingLock.SavedApcStateFill[40] )
    IopPerfIoTrackingLock.SchedulerApcFill3[48] = 0;
  else
    v1 = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread, v0);
  return v1;
}
