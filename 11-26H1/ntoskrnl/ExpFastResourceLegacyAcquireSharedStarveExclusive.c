/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025F9B4
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x14025F880 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 * Callees:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402FD38C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402FD3E0 (ExIsFastResourceHeldExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rdi
  char v3; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v3 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v3 || (unsigned __int8)ExIsFastResourceHeldExclusive(BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v3;
}
