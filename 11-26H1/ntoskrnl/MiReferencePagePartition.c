/*
 * XREFs of MiReferencePagePartition @ 0x1406F56DC
 * Callers:
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14086E774 (MmIdentifyPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1, int a2, _QWORD *a3)
{
  unsigned __int8 v5; // bl
  __int64 v6; // r8
  unsigned int v7; // esi

  *a3 = 0LL;
  if ( a2 )
  {
    v5 = 17;
  }
  else
  {
    v5 = MiSafeLockPage(
           (a1 + 0x220000000000LL) / 48,
           (__int64)((unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
           (__int64)a3);
    if ( v5 == 17 )
      return 3221225485LL;
  }
  if ( PsReferencePartitionSafe(*(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                      + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                          + 256LL)) )
  {
    *a3 = v6;
    v7 = 0;
  }
  else
  {
    v7 = -1073741558;
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v5 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
  }
  return v7;
}
