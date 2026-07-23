/*
 * XREFs of ExQueryWnfStateData @ 0x1409C4360
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x140606870 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140606910 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x1406069A0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x140609950 (PopErratumUpdateCallback.c)
 *     PopBSDiagButtonWnfCallback @ 0x140610B50 (PopBSDiagButtonWnfCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406E70A0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14079E9F0 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407CFDE0 (PopWnfMixedRealityCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1407CFE70 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfEffectivePowerModeCallback @ 0x1407D2650 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfUsb4DisplayPresenceCallback @ 0x1407DA420 (PopWnfUsb4DisplayPresenceCallback.c)
 *     PopWnfInSupCallback @ 0x1407DA670 (PopWnfInSupCallback.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x1407DD720 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1407DDD30 (PopUsbErrorWNFNotificationCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E6000 (PopAdaptiveStandbyWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407F27F0 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *v9; // rsi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  v9 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1, a3, a4);
  if ( v9 )
  {
    StateData = ExpWnfReadStateData(v9, 0LL, a2, a3, a4->Thread, a4);
    ExReleaseRundownProtection_0(v9 + 1);
    if ( StateData < 0 )
      v8 = StateData;
  }
  else
  {
    v8 = -1073741772;
  }
  KeLeaveCriticalRegion();
  return v8;
}
