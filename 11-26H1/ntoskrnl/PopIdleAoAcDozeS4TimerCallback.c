/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x14060FC50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead);
  byte_140F10354 = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&PopPdcDeviceListLock.SystemAffinityTokenListHead, v0);
  _m_prefetchw(&dword_140F1035C);
  if ( !_InterlockedOr(&dword_140F1035C, 1u) )
  {
    PopDeepSleepSetDisengageReason(4u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopPdcDeviceListLock.1136, DelayedWorkQueue);
  }
}
