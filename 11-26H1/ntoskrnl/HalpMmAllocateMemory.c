/*
 * XREFs of HalpMmAllocateMemory @ 0x1405801F4
 * Callers:
 *     InitCounterGroupBsp @ 0x140BF0EC0 (InitCounterGroupBsp.c)
 *     HalpInitializeProfiling @ 0x140BF3728 (HalpInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140BF5590 (Amd64InitializeProfiling.c)
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140C18590 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140C189D4 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 */

__int64 __fastcall HalpMmAllocateMemory(__int64 a1)
{
  return HalpMmAllocateMemoryInternal(a1);
}
