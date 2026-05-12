/*
 * XREFs of StorPortGetVirtualAddressVrfy @ 0x1401C2470
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetVirtualAddress @ 0x14007BB60 (StorPortGetVirtualAddress.c)
 */

PVOID __fastcall StorPortGetVirtualAddressVrfy(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return StorPortGetVirtualAddress(a1, a2);
}
