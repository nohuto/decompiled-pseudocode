/*
 * XREFs of RaidIsAdapterControlSupported @ 0x140010D4C
 * Callers:
 *     RaidAdapterStopAdapter @ 0x14000EE90 (RaidAdapterStopAdapter.c)
 *     StorEnableAdapterHealthEvents @ 0x14000F3D8 (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14000F8DC (StorEnableAdapterDiagnosticEvents.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14000FACC (RaCallMiniportAdapterControlSafe.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x14000FD40 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000FFA4 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1400108D0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterStopOnPowerdown @ 0x140010A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidCoalescingCallback @ 0x140010AB0 (RaidCoalescingCallback.c)
 *     StorAdapterNeedsUpdate @ 0x140010C40 (StorAdapterNeedsUpdate.c)
 *     RaidAdapterRescanBus @ 0x140036EE4 (RaidAdapterRescanBus.c)
 *     RaidAdapterStop @ 0x1400509C8 (RaidAdapterStop.c)
 *     StorPortAdapterActiveCondition @ 0x1400553B0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x140055510 (StorPortAdapterIdleCondition.c)
 *     StorEnableAdapterOperationalEvents @ 0x14005BE70 (StorEnableAdapterOperationalEvents.c)
 *     RaidAdapterDeviceReset @ 0x140060C14 (RaidAdapterDeviceReset.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaidPowerSettingCallback @ 0x14006D720 (RaidPowerSettingCallback.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x140071250 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterQueryCoolingInterface @ 0x14007F56C (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x14007F758 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterDirectedPowerDown @ 0x140081520 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1400818A0 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerControl @ 0x140081C40 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140184FF8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401864B4 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x140186900 (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B5A80 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 */

char __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v3; // rsi
  char v4; // di
  __int64 v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 v10; // rcx
  _DWORD *v11; // r9
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // r9
  __int64 v18; // rcx
  _DWORD *v19; // r9
  __int64 v20; // rcx
  _DWORD *v21; // r9
  __int64 v22; // rcx
  _DWORD *v23; // r9

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 )
    return *(_BYTE *)(a2 + a1 + 292);
  v4 = 0;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 288) = 19;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1, 2LL) )
    *v7 = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v6, 3LL) )
    *v9 = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v8, 5LL) )
    *v11 = 22;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v10, 6LL) )
    *v13 = 23;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v12, 7LL) )
    *v15 = 24;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v14, 8LL) )
    *v17 = 25;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v16, 9LL) )
    *v19 = 26;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v18, 10LL) )
    *v21 = 27;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v20, 12LL) )
    *v23 = 28;
  if ( (int)RaCallMiniportAdapterControl(v22) >= 0 )
  {
    *(_DWORD *)(a1 + 248) |= 0x20u;
    return *(_BYTE *)(v3 + a1 + 292);
  }
  return v4;
}
