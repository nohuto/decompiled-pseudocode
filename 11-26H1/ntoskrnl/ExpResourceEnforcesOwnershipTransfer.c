/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x140300FE0
 * Callers:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14042DC6C (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1404AFB20 (ExReinitializeResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState) != 0;
}
