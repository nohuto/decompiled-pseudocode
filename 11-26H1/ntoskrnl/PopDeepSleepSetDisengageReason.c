/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1403BE008
 * Callers:
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403BDF7C (PopIncrementPowerSettingPendingUpdates.c)
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140421350 (PpmUpdatePlatformIdleVeto.c)
 *     PopSetPowerActionState @ 0x1404ED954 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14050BBE0 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14060FC50 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1409F8CA4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140B52B14 (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1403BE0CC (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403BE2C8 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeClearForceIdle @ 0x1404BECEC (KeClearForceIdle.c)
 */

void __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask |= 1 << a1;
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint();
    LOBYTE(v5) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v5);
    if ( !v3 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
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
