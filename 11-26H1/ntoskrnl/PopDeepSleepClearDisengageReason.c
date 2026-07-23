/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1403BE204
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403BE16C (PopDecrementPowerSettingPendingUpdates.c)
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 *     PopSetPowerActionState @ 0x1404ED954 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14052B4C8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x14060A750 (PopThermalEventTransitionTimerCallback.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407CF670 (PopDirectedDripsWorkerRoutine.c)
 *     PopIdleAoAcDozeToS4 @ 0x1407DE050 (PopIdleAoAcDozeToS4.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC6CD8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140B52B14 (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403BE2C8 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1403BE410 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KeSetForceIdle @ 0x1404BEC18 (KeSetForceIdle.c)
 */

void __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // r8d
  unsigned __int64 v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask &= ~(1 << a1);
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint();
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 4) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
