/*
 * XREFs of MiMakePartitionActive @ 0x1404A9C80
 * Callers:
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MiCreateNewSection @ 0x140A562D8 (MiCreateNewSection.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiSetSlabAllocatorPolicy @ 0x140707974 (MiSetSlabAllocatorPolicy.c)
 *     SmCreatePartition @ 0x140AB0DEC (SmCreatePartition.c)
 */

__int64 __fastcall MiMakePartitionActive(__int64 a1)
{
  KIRQL v2; // al
  KIRQL v3; // di

  if ( (int)SmCreatePartition(*(_QWORD *)(a1 + 256)) < 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2EB80);
    v3 = v2;
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    {
      if ( v2 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
      else
        ExReleaseSpinLockExclusive(&dword_140E2EB80, v2);
      return 1LL;
    }
    if ( (unsigned int)MiChargeCommit((ULONG *)a1, 0x32uLL, 0) )
    {
      *(_QWORD *)(a1 + 17280) = 50LL;
      if ( (ULONG *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFEF);
      if ( v3 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
      else
        ExReleaseSpinLockExclusive(&dword_140E2EB80, v3);
      MiReturnCommit(a1, 50LL, 0);
      return 1LL;
    }
    if ( v3 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
    else
      ExReleaseSpinLockExclusive(&dword_140E2EB80, v3);
    return 0LL;
  }
  return 1LL;
}
