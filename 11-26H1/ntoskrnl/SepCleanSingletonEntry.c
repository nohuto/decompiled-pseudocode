/*
 * XREFs of SepCleanSingletonEntry @ 0x1403CB1DC
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1405240DC (SepCleanupMarkedForDeletionEntries.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403CB24C (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void SepCleanSingletonEntry()
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // di

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber();
  v1 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v2 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    v3 = *((_QWORD *)v1 + 2);
    v4 = v2;
    *((_QWORD *)v1 + 1) = 0LL;
    if ( v3 )
    {
      AuthzBasepFreeSecurityAttributesList();
      ExFreePoolWithTag(*((PVOID *)v1 + 2), 0x74446553u);
      *((_QWORD *)v1 + 2) = 0LL;
    }
    ExReleaseSpinLockExclusive(v1, v4);
  }
}
