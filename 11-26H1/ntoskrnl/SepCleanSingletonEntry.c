/*
 * XREFs of SepCleanSingletonEntry @ 0x1403B2248
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x14052674C (SepCleanupMarkedForDeletionEntries.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403B212C (SepGetSingletonEntryFromIndexNumber.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepCleanSingletonEntry(unsigned int a1)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rbx
  KIRQL v3; // al
  _DWORD *v4; // rcx
  KIRQL v5; // di

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v2 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    v4 = (_DWORD *)*((_QWORD *)v2 + 2);
    v5 = v3;
    *((_QWORD *)v2 + 1) = 0LL;
    if ( v4 )
    {
      AuthzBasepFreeSecurityAttributesList(v4);
      ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
      *((_QWORD *)v2 + 2) = 0LL;
    }
    ExReleaseSpinLockExclusive(v2, v5);
  }
}
