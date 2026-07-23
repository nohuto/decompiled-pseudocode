/*
 * XREFs of MiMakePartitionActive @ 0x1404A3310
 * Callers:
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiSetSlabAllocatorPolicy @ 0x14070C644 (MiSetSlabAllocatorPolicy.c)
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 */

__int64 __fastcall MiMakePartitionActive(__int64 a1)
{
  KIRQL v2; // al
  KIRQL v3; // di

  if ( (int)SmCreatePartition(*(_QWORD *)(a1 + 256)) < 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
    v3 = v2;
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    {
      if ( v2 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
      else
        ExReleaseSpinLockExclusive(&dword_140E2ED00, v2);
      return 1LL;
    }
    if ( (unsigned int)MiChargeCommit((ULONG *)a1, 0x32uLL, 0) )
    {
      *(_QWORD *)(a1 + 17280) = 50LL;
      if ( (ULONG *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFEF);
      if ( v3 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
      else
        ExReleaseSpinLockExclusive(&dword_140E2ED00, v3);
      MiReturnCommit(a1, 50LL, 0);
      return 1LL;
    }
    if ( v3 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
    else
      ExReleaseSpinLockExclusive(&dword_140E2ED00, v3);
    return 0LL;
  }
  return 1LL;
}
