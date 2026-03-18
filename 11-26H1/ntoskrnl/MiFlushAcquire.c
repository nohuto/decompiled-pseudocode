/*
 * XREFs of MiFlushAcquire @ 0x1404B3174
 * Callers:
 *     MiCommitFileBackedSection @ 0x140A58878 (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x14030BFE0 (MiReferenceSubsection.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, __int64 *a2, __int64 *a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // al
  KIRQL v8; // di

  v3 = (volatile LONG *)(a1 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = v7;
  if ( *(_QWORD *)(a1 + 40) == -1LL )
  {
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v7);
    return 0LL;
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2, 0);
      MiReferenceSubsection(a3, 0);
    }
    ++*(_QWORD *)(a1 + 40);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v8);
    return 1LL;
  }
}
