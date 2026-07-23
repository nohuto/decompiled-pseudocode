/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1409C4400
 * Callers:
 *     CcRegisterForContainerRestore @ 0x1405B3020 (CcRegisterForContainerRestore.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x1405D3D24 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopEnsureErratumSubscribed @ 0x140609890 (PopEnsureErratumSubscribed.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x1406E704C (CmFcpSubscribeScmWnfStateChange.c)
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 *     PnpBootPhaseComplete @ 0x14079EA7C (PnpBootPhaseComplete.c)
 *     PopSetupAirplaneModeNotification @ 0x1407CB5F0 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407CB630 (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407CB670 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407CB6B0 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x1407CB72C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407CB7BC (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407CB7FC (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUsb4DisplayPresenceNotification @ 0x1407CB83C (PopSetupUsb4DisplayPresenceNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407CB87C (PopSetupUserPresencePredictionNotification.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407D24A0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x1407D3A14 (PopSubscribeHibernatePolicyWnf.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     RtlpCtContextInit @ 0x14080EBA8 (RtlpCtContextInit.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     WheapInitWnfCallbacks @ 0x14085078C (WheapInitWnfCallbacks.c)
 *     PopEsWorker @ 0x140B773E0 (PopEsWorker.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CBFA3C (VslRegisterIumPowerCallbacks.c)
 *     PiUEventInit @ 0x140CCAF2C (PiUEventInit.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD931C (PopPowerButtonSuppressionInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140CDB010 (PopBatteryInitPhaseTwo.c)
 *     PopEsInit @ 0x140CDBD48 (PopEsInit.c)
 *     PopBSDiagInitialize @ 0x140CDC274 (PopBSDiagInitialize.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
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
