/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140948A90
 * Callers:
 *     CcRegisterForContainerRestore @ 0x1405B0810 (CcRegisterForContainerRestore.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1405D153C (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopEnsureErratumSubscribed @ 0x140606D90 (PopEnsureErratumSubscribed.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x1406E2D6C (CmFcpSubscribeScmWnfStateChange.c)
 *     IopInitializeDumpPolicySettings @ 0x140793844 (IopInitializeDumpPolicySettings.c)
 *     PnpBootPhaseComplete @ 0x14079BF3C (PnpBootPhaseComplete.c)
 *     PopSetupAirplaneModeNotification @ 0x1407C8590 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407C85D0 (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407C8610 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407C8650 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x1407C86CC (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407C875C (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407C879C (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407C87DC (PopSetupUserPresencePredictionNotification.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407CF400 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x1407D0974 (PopSubscribeHibernatePolicyWnf.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     TtmiInitTerminals @ 0x1407EBD48 (TtmiInitTerminals.c)
 *     RtlpCtContextInit @ 0x140809118 (RtlpCtContextInit.c)
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 *     WheapInitWnfCallbacks @ 0x14084A47C (WheapInitWnfCallbacks.c)
 *     PopEsWorker @ 0x140B72400 (PopEsWorker.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CB99FC (VslRegisterIumPowerCallbacks.c)
 *     PiUEventInit @ 0x140CC4E4C (PiUEventInit.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD317C (PopPowerButtonSuppressionInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140CD4C90 (PopBatteryInitPhaseTwo.c)
 *     PopEsInit @ 0x140CD59F4 (PopEsInit.c)
 *     PopBSDiagInitialize @ 0x140CD5F20 (PopBSDiagInitialize.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140948D34 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2);
  KeLeaveCriticalRegion();
  return v3;
}
