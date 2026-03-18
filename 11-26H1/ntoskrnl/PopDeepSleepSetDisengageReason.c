/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1403B40FC
 * Callers:
 *     PopQueueQuerySetIrp @ 0x1403B2B18 (PopQueueQuerySetIrp.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403B4070 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopFxPlatformStateAvailable @ 0x14042C75C (PopFxPlatformStateAvailable.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14042CC80 (PpmUpdatePlatformIdleVeto.c)
 *     PopSetPowerActionState @ 0x1404F4374 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x140512170 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14060CAF0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A3D284 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140B50284 (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1403B41C0 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403B43BC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeClearForceIdle @ 0x1404C533C (KeClearForceIdle.c)
 */

void __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread);
  v3 = *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72];
  v4 = v2;
  *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] |= 1 << a1;
  if ( v3 != *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] )
  {
    PopDiagTraceSetDeepSleepConstraint();
    LOBYTE(v5) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v5);
    if ( !v3 )
    {
      if ( unk_140F10F08 )
      {
        KeClearForceIdle();
        unk_140F10F08 = 0;
      }
      if ( !PopWeakChargerLock.SchedulerApcFill3[32] )
      {
        PopWeakChargerLock.SchedulerApcFill3[32] = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopWeakChargerLock.SchedulerApcFill5[40], DelayedWorkQueue);
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
