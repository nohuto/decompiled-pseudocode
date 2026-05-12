/*
 * XREFs of StorPortGetVirtualAddress @ 0x14007BB60
 * Callers:
 *     StorPortGetVirtualAddressVrfy @ 0x1401C2470 (StorPortGetVirtualAddressVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
