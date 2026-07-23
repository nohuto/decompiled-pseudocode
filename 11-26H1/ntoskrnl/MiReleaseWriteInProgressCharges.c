/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1402AE9B4
 * Callers:
 *     MiFreeModWriterEntry @ 0x1402AE950 (MiFreeModWriterEntry.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiReleaseMappedPages @ 0x1404FB928 (MiReleaseMappedPages.c)
 *     MiModwriterReturnUnusedPages @ 0x1407123A4 (MiModwriterReturnUnusedPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiReleaseWriteInProgressCharges(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  volatile LONG *v6; // rbp
  volatile LONG *v7; // rcx
  KIRQL v8; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  unsigned __int64 i; // rax
  signed __int32 v12; // eax

  if ( a3 )
  {
    v5 = a2;
    if ( a2 )
    {
      if ( !*(_QWORD *)(a1 + 17288) )
        goto LABEL_21;
      v6 = (volatile LONG *)(a1 + 17272);
      v7 = (volatile LONG *)(a1 + 17272);
      if ( KeGetCurrentIrql() == 2 )
      {
        v8 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v7);
      }
      else
      {
        v8 = ExAcquireSpinLockExclusive(v7);
      }
      v5 = MiRestockOverCommit(a1, a2);
      if ( v8 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      else
        ExReleaseSpinLockExclusive(v6, v8);
      if ( v5 )
      {
LABEL_21:
        if ( (ULONG *)a1 == &MiSystemPartition && !*(_DWORD *)(a1 + 17296) )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
          CachedCommit = CurrentPrcb->CachedCommit;
          for ( i = v5 + CachedCommit; i <= 0x100; i = v12 + v5 )
          {
            v12 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                    v5 + CachedCommit,
                    CachedCommit);
            if ( v12 == CachedCommit )
              return MiReturnResident(a1, a2);
            CachedCommit = v12;
          }
        }
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), -v5);
        MiSignalCommitSignals(a1, _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23104), -v5) - v5);
      }
    }
  }
  return MiReturnResident(a1, a2);
}
