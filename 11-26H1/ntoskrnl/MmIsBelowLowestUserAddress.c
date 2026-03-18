/*
 * XREFs of MmIsBelowLowestUserAddress @ 0x140483720
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1409CE424 (MiIsVaRangeAvailable.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140B65804 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140B66514 (PspProcessDynamicEHContinuationTargets.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsBelowLowestUserAddress(unsigned __int64 a1)
{
  return a1 < 0x10000;
}
