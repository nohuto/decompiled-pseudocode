/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1402B6320
 * Callers:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402B8340 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14043B3BC (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1404B66D0 (ExReinitializeResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.Spare35[1]) != 0;
}
