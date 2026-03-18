/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1403B42F8
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1403B3D2C (PopDequeueQuerySetIrp.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403B4260 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopFxPlatformStateAvailable @ 0x14042C75C (PopFxPlatformStateAvailable.c)
 *     PpmUpdatePlatformIdleVeto @ 0x14042CC80 (PpmUpdatePlatformIdleVeto.c)
 *     PopSetPowerActionState @ 0x1404F4374 (PopSetPowerActionState.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x140528ED8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x140607BA0 (PopThermalEventTransitionTimerCallback.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407CC5D0 (PopDirectedDripsWorkerRoutine.c)
 *     PopIdleAoAcDozeToS4 @ 0x1407DA0B0 (PopIdleAoAcDozeToS4.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC5068 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140B50284 (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403B43BC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1403B4504 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KeSetForceIdle @ 0x1404C5268 (KeSetForceIdle.c)
 */

void __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // r8d
  unsigned __int64 v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SchedulerApc.Thread);
  v3 = *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72];
  v4 = v2;
  *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] &= ~(1 << a1);
  if ( v3 != *(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] )
  {
    PopDiagTraceClearDeepSleepConstraint();
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !*(_DWORD *)&PopWeakChargerLock.SchedulerApcFill5[72] )
    {
      if ( (unk_140F10F10 & 4) != 0 )
      {
        KeSetForceIdle();
        unk_140F10F08 = 1;
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
