/*
 * XREFs of StorPortGetVirtualAddress @ 0x1400742A0
 * Callers:
 *     sub_1401B7430 @ 0x1401B7430 (sub_1401B7430.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall StorPortGetVirtualAddress(__int64 a1, PHYSICAL_ADDRESS a2)
{
  return MmGetVirtualForPhysical(a2);
}
