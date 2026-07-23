/*
 * XREFs of MiPrepareDeleteOnClose @ 0x1406EC534
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1404A9E70 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406EC488 (MiMoveUnusedSubsectionsToDeleteOnClose.c)
 */

void __fastcall MiPrepareDeleteOnClose(__int64 a1)
{
  __int64 v1; // rdi
  volatile LONG *i; // rbx

  v1 = a1 + 2480;
  for ( i = *(volatile LONG **)(a1 + 2480); i != (volatile LONG *)v1; i = *(volatile LONG **)i )
  {
    if ( (i[12] & 0x20) == 0 )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      {
        MiMoveUnusedSubsectionsToDeleteOnClose(a1, (__int64)(i - 2));
        ExReleaseSpinLockExclusiveFromDpcLevel(i + 16);
      }
    }
  }
}
