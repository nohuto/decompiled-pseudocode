/*
 * XREFs of ExpFastResourceLegacyAcquireShared @ 0x1404B281C
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1402FD040 (SepCanTokenMatchAllPackageSid.c)
 *     SepAcquireOrderedReadLocks @ 0x1402FD460 (SepAcquireOrderedReadLocks.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402FD38C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402FD3E0 (ExIsFastResourceHeldExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
