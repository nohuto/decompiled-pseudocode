/*
 * XREFs of PopIdleWakeNotifyModernStandbyExit @ 0x1404EA34C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1404EA3F0 (PopIdleWakeStopActiveIntervalAccounting.c)
 */

void PopIdleWakeNotifyModernStandbyExit()
{
  __int64 v0; // rsi
  KIRQL v1; // al
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = qword_140F0F5D0;
  v4 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopAdaptiveStandbyLock.KernelShadowStack);
  v2 = *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor;
  *(_QWORD *)&PopAdaptiveStandbyLock.SchedulerAssistPriorityFloor = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&PopAdaptiveStandbyLock.KernelShadowStack, v1);
  if ( v2 )
  {
    RtlGetInterruptTimePrecise(&v4);
    v3 = v4;
    PopIdleWakeStopActiveIntervalAccounting((void *)v2);
    *(_QWORD *)(v2 + 38064) = v0;
    *(_QWORD *)(v2 + 38072) = v3;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 38032), DelayedWorkQueue);
  }
}
