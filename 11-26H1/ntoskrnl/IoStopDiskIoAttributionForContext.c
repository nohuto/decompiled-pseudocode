/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1404636E0
 * Callers:
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x140AFC3A8 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryDeactivate @ 0x140B3A694 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1);
  RtlRbRemoveNode((__int64)&IopSessionNotificationLock.SchedulerApcFill5[80], (__int64)a1);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1, v2);
  ExWaitForRundownProtectionRelease(a1 + 21);
}
