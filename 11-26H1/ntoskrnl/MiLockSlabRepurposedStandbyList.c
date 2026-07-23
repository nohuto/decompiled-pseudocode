/*
 * XREFs of MiLockSlabRepurposedStandbyList @ 0x14070C460
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiLockSlabRepurposedStandbyList(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rcx

  v3 = (volatile LONG *)(*(_QWORD *)(a2 + 80) + 32LL);
  if ( a3 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  return 0LL;
}
