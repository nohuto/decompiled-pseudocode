/*
 * XREFs of MiReleaseWriteInProgressCharges @ 0x1402CCBF4
 * Callers:
 *     MiFreeModWriterEntry @ 0x1402CCB90 (MiFreeModWriterEntry.c)
 *     MiInsertPagesInList @ 0x1402CD600 (MiInsertPagesInList.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiReleaseMappedPages @ 0x140502058 (MiReleaseMappedPages.c)
 *     MiModwriterReturnUnusedPages @ 0x14070D6F4 (MiModwriterReturnUnusedPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
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
