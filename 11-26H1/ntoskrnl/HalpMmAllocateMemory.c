/*
 * XREFs of HalpMmAllocateMemory @ 0x14057DCD4
 * Callers:
 *     InitCounterGroupBsp @ 0x140BEAEC0 (InitCounterGroupBsp.c)
 *     HalpInitializeProfiling @ 0x140BED728 (HalpInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140BEF590 (Amd64InitializeProfiling.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140C12590 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140C129D4 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1);
}
