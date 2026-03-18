/*
 * XREFs of ACPIBuildCompleteGeneric @ 0x140034A40
 * Callers:
 *     ACPIBuildProcessDevicePhasePep @ 0x1400341B0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1400345A0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1400348C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140034B80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140035770 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x14004DBF0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x14004E580 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1400537E0 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x140057920 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x140058170 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058380 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1400585D0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x140058720 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1400590F0 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x140028050 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteGeneric(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a4 + 48) = a2;
  *(_DWORD *)(a4 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), v4);
}
