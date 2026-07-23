/*
 * XREFs of MmIsBelowLowestUserAddress @ 0x14047D050
 * Callers:
 *     MiIsVaRangeAvailable @ 0x14099F404 (MiIsVaRangeAvailable.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B688A4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B694A0 (PspProcessDynamicEHContinuationTargets.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsBelowLowestUserAddress(unsigned __int64 a1)
{
  return a1 < 0x10000;
}
