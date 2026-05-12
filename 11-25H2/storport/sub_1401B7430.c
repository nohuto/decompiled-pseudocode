/*
 * XREFs of sub_1401B7430 @ 0x1401B7430
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetVirtualAddress @ 0x1400742A0 (StorPortGetVirtualAddress.c)
 */

PVOID __fastcall sub_1401B7430(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return StorPortGetVirtualAddress(a1, a2);
}
