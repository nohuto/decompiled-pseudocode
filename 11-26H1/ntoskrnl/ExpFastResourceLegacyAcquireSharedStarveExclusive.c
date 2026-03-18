/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1404563A4
 * Callers:
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x140456270 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402B26BC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402B2710 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140456410 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(struct _KTHREAD *BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rdi
  char v3; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v3 = ExAcquireFastResourceSharedStarveExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v3 || ExIsFastResourceHeldExclusive((ULONG_PTR)BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v3;
}
