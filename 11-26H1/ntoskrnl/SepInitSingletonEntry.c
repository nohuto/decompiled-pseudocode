/*
 * XREFs of SepInitSingletonEntry @ 0x1403B22B8
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403B212C (SepGetSingletonEntryFromIndexNumber.c)
 */

void __fastcall SepInitSingletonEntry(unsigned int a1, __int64 a2)
{
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v4; // rbx
  KIRQL v5; // al

  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v4 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v5 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    *((_QWORD *)v4 + 1) = a2;
    *((_QWORD *)v4 + 2) = 0LL;
    ExReleaseSpinLockExclusive(v4, v5);
  }
}
