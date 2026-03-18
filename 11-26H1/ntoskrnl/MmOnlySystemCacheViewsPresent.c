/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x140465540
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x140464DC0 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x14044FAD0 (MiLockSectionControlArea.c)
 */

char __fastcall MmOnlySystemCacheViewsPresent(__int64 *a1)
{
  __int64 v1; // rax
  bool v3; // bl
  volatile LONG *v4; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  OldIrql = 0;
  v1 = MiLockSectionControlArea(a1, 1, &OldIrql);
  if ( !v1 )
    return 1;
  v3 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  v4 = (volatile LONG *)(v1 + 72);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, OldIrql);
  return v3;
}
