/*
 * XREFs of MiLockSlabAllocator @ 0x1404EF450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockSlabAllocator(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rcx

  v3 = (volatile LONG *)(a2 + 16);
  if ( a3 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  return 0LL;
}
