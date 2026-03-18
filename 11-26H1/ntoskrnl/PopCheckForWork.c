/*
 * XREFs of PopCheckForWork @ 0x1404385D4
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140437DF0 (PoRegisterDeviceForIdleDetection.c)
 *     PopUserPresentSet @ 0x1404384B4 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140438690 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140606D04 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140606D70 (PopCoalesingTimerDpcCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void PopCheckForWork()
{
  KIRQL v0; // bl

  if ( (*(_DWORD *)&stru_140F10828.ApcStateFill[32] & unk_140F10E44) != 0
    && (struct _KTHREAD *)unk_140F10E10 != KeGetCurrentThread() )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F10820);
    if ( *(int *)&stru_140F10828.ApcStateFill[32] < 0 )
    {
      *(_DWORD *)&stru_140F10828.ApcStateFill[32] &= ~0x80000000;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F10828.152, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&qword_140F10820, v0);
  }
}
