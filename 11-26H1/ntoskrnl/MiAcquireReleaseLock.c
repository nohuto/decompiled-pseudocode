/*
 * XREFs of MiAcquireReleaseLock @ 0x1407084D0
 * Callers:
 *     MiLockMemoryLists @ 0x140708630 (MiLockMemoryLists.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiAcquireReleaseLock(__int64 a1, volatile LONG *a2)
{
  if ( a1 )
    ExAcquireSpinLockExclusiveAtDpcLevel(a2);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
}
