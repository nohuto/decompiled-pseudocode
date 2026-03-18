/*
 * XREFs of ExQueryWnfStateData @ 0x1409489F0
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x140603D70 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140603E10 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140603EA0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x140606E50 (PopErratumUpdateCallback.c)
 *     PopBSDiagButtonWnfCallback @ 0x14060DA50 (PopBSDiagButtonWnfCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406E2DC0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14079BEB0 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407CCD40 (PopWnfMixedRealityCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1407CCDD0 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfEffectivePowerModeCallback @ 0x1407CF5B0 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfInSupCallback @ 0x1407D72D0 (PopWnfInSupCallback.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x1407D9AC0 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1407D9D90 (PopUsbErrorWNFNotificationCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E1100 (PopAdaptiveStandbyWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407ECC90 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140948918 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x14094A158 (ExpWnfReadStateData.c)
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
