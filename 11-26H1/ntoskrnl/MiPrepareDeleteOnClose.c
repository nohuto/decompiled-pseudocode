/*
 * XREFs of MiPrepareDeleteOnClose @ 0x1406E7884
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1404B07E0 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406E77D8 (MiMoveUnusedSubsectionsToDeleteOnClose.c)
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
