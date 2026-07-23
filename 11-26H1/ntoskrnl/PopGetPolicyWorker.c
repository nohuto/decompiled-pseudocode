/*
 * XREFs of PopGetPolicyWorker @ 0x14042756C
 * Callers:
 *     PopUserPresentSet @ 0x1404273D4 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1404275B0 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140609804 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140609870 (PopCoalesingTimerDpcCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopPolicyWorkerAction @ 0x1409F3240 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140B3F1F0 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink);
  PopWorkerPending |= a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink, v2);
}
