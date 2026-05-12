/*
 * XREFs of RaMiniportIsFeatureSupported @ 0x14005073C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000FFA4 (RaidAdapterSendPowerToMiniport.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartAdapter @ 0x1400113C8 (RaidAdapterRestartAdapter.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x14002AE80 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleState @ 0x14002C7E0 (StorPortUnitIdleState.c)
 *     StorPortUnitIdleCondition @ 0x1400300F0 (StorPortUnitIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1400308C0 (StorPortAdapterIdleState.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 * Callees:
 *     <none>
 */

char __fastcall RaMiniportIsFeatureSupported(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = *(_DWORD *)(a1 + 392);
  result = 0;
  if ( v2 )
  {
    if ( a2 < v2 )
      return *(_BYTE *)(a2 + a1 + 396);
  }
  return result;
}
