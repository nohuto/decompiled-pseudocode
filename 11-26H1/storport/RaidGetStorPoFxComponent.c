/*
 * XREFs of RaidGetStorPoFxComponent @ 0x140031BA0
 * Callers:
 *     NvmeNamespaceIdleState @ 0x140031970 (NvmeNamespaceIdleState.c)
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x140079DD0 (RaidGetTotalStorPoFxDeviceSize.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x14007FE4C (RaidRegisterForRuntimePowerManagement.c)
 *     NvmeAdapterInitializePoFx @ 0x140123A1C (NvmeAdapterInitializePoFx.c)
 *     NvmeRegisterForRuntimePowerManagement @ 0x14012A824 (NvmeRegisterForRuntimePowerManagement.c)
 * Callees:
 *     <none>
 */

int *__fastcall RaidGetStorPoFxComponent(int *a1, unsigned int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( *a1 == 1 )
  {
    if ( a2 < a1[2] )
      return &a1[16 * (unsigned __int64)a2 + 4];
    return 0LL;
  }
  if ( v2 != 2 && v2 != 3 || a2 >= a1[2] )
    return 0LL;
  return &a1[16 * (unsigned __int64)a2 + 6];
}
