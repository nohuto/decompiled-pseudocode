/*
 * XREFs of ExpFastResourceLegacyAcquireShared @ 0x1404B8FEC
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     SepAcquireOrderedReadLocks @ 0x1402B2790 (SepAcquireOrderedReadLocks.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402B26BC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402B2710 (ExIsFastResourceHeldExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireShared(__int64 *BugCheckParameter2, char a2)
{
  void *OwnerEntryForLegacyShim; // rdi
  char v5; // bl

  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v5 = ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, a2);
  if ( !v5 || ExIsFastResourceHeldExclusive((ULONG_PTR)BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v5;
}
