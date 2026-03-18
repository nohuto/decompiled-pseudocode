/*
 * XREFs of ACPIBuildSynchronizationRequest @ 0x140041ABC
 * Callers:
 *     ACPIDockIrpStartDevice @ 0x1400AC420 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequest(int a1, int a2, int a3, int a4, char a5)
{
  return ACPIBuildSynchronizationRequestInternal(a1, a2, a3, a4, a5);
}
