/*
 * XREFs of PopCheckForWork @ 0x1404274F4
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140426D10 (PoRegisterDeviceForIdleDetection.c)
 *     PopUserPresentSet @ 0x1404273D4 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1404275B0 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140609804 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140609870 (PopCoalesingTimerDpcCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void PopCheckForWork()
{
  KIRQL v0; // bl

  if ( (*(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] & PopWorkerPending) != 0
    && (struct _KTHREAD *)PopPolicyLockThread != KeGetCurrentThread() )
  {
    v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink);
    if ( *(int *)&PpmIdlePolicyLock.WaitBlockFill11[112] < 0 )
    {
      *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] &= ~0x80000000;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&PpmIdlePolicyLock.WaitBlockFill11[128], DelayedWorkQueue);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink, v0);
  }
}
