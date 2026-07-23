/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1405CD3E8
 * Callers:
 *     IopHardErrorThread @ 0x140797730 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void *IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  void *v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread);
  v1 = *(void **)&IopPerfIoTrackingLock.SavedApcStateFill[40];
  if ( *(struct _KTHREAD **)(*(_QWORD *)&IopPerfIoTrackingLock.SavedApcStateFill[40] + 8LL) != (struct _KTHREAD *)&IopPerfIoTrackingLock.SavedApcStateFill[40]
    || (v2 = **(_QWORD **)&IopPerfIoTrackingLock.SavedApcStateFill[40],
        *(_QWORD *)(**(_QWORD **)&IopPerfIoTrackingLock.SavedApcStateFill[40] + 8LL) != *(_QWORD *)&IopPerfIoTrackingLock.SavedApcStateFill[40]) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&IopPerfIoTrackingLock.SavedApcStateFill[40] = **(_QWORD **)&IopPerfIoTrackingLock.SavedApcStateFill[40];
  *(_QWORD *)(v2 + 8) = &IopPerfIoTrackingLock.SavedApcStateFill[40];
  IopPerfIoTrackingLock.Spare32 = v1;
  KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SchedulerApc.Thread, v0);
  return v1;
}
