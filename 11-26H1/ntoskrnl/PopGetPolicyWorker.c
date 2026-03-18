/*
 * XREFs of PopGetPolicyWorker @ 0x14043864C
 * Callers:
 *     PopUserPresentSet @ 0x1404384B4 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140438690 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140606D04 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140606D70 (PopCoalesingTimerDpcCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopPolicyWorkerAction @ 0x140A37680 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140B3D020 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F10820);
  unk_140F10E44 |= a1;
  KeReleaseSpinLock(&qword_140F10820, v2);
}
