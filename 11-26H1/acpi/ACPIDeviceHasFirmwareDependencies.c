/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x14002AB9C
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x140029650 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400C2428 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1008) & 0x40) != 0 || *(_QWORD *)(a1 + 648) != 0LL;
}
