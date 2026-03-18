/*
 * XREFs of MiAcquireReleaseLock @ 0x140703800
 * Callers:
 *     MiLockMemoryLists @ 0x140703960 (MiLockMemoryLists.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiAcquireReleaseLock(__int64 a1, volatile LONG *a2)
{
  if ( a1 )
    ExAcquireSpinLockExclusiveAtDpcLevel(a2);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
}
