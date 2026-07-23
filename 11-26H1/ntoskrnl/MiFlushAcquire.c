/*
 * XREFs of MiFlushAcquire @ 0x1404AC7F4
 * Callers:
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x1402EE060 (MiReferenceSubsection.c)
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
