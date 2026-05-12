/*
 * XREFs of RaMiniportGetRaidAdapter @ 0x140042128
 * Callers:
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     StorpAllocateHostMemoryBuffer @ 0x140051374 (StorpAllocateHostMemoryBuffer.c)
 *     StorpFreeHostMemoryBuffer @ 0x140058A68 (StorpFreeHostMemoryBuffer.c)
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x14005B0A8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorPortpInvokeAcpiMethod @ 0x14005B718 (StorPortpInvokeAcpiMethod.c)
 *     StorpSetUnitAttributes @ 0x14005C7AC (StorpSetUnitAttributes.c)
 *     RaidAdapterUpdateDynamicRegistrySettings @ 0x14006C0F0 (RaidAdapterUpdateDynamicRegistrySettings.c)
 *     StorExtBuildScatterGatherList @ 0x14007ABD0 (StorExtBuildScatterGatherList.c)
 *     StorExtPutScatterGatherList @ 0x14007B100 (StorExtPutScatterGatherList.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 *     StorpGetDeviceBase2 @ 0x14007CD04 (StorpGetDeviceBase2.c)
 *     StorPortGetScatterGatherListVrfy @ 0x1401C22F0 (StorPortGetScatterGatherListVrfy.c)
 *     StorPortGetUncachedExtensionVrfy @ 0x1401C23E0 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaMiniportGetRaidAdapter(_DWORD *a1)
{
  if ( !a1 || (a1[62] & 1) != 0 )
    return 0LL;
  else
    return *(_QWORD *)a1;
}
