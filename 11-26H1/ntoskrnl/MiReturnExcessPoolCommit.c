/*
 * XREFs of MiReturnExcessPoolCommit @ 0x140367634
 * Callers:
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnExcessPoolCharges @ 0x1403D1EA0 (MiReturnExcessPoolCharges.c)
 *     MiFreeLargePageChain @ 0x1403D35CC (MiFreeLargePageChain.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile LONG *v8; // rcx
  KIRQL v9; // bp
  volatile LONG *v10; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedCommit; // r8
  unsigned __int64 i; // rax
  signed __int32 v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx

  v2 = *(_WORD *)(a1 + 100);
  if ( (v2 & 2) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 8);
    if ( v4 != v5 )
    {
      v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 174LL));
      v7 = v5 - v4;
      if ( v7 )
      {
        if ( !*(_QWORD *)(v6 + 17288) )
          goto LABEL_28;
        v8 = (volatile LONG *)(v6 + 17272);
        if ( KeGetCurrentIrql() == 2 )
        {
          v9 = 17;
          ExAcquireSpinLockExclusiveAtDpcLevel(v8);
        }
        else
        {
          v9 = ExAcquireSpinLockExclusive(v8);
        }
        v7 = MiRestockOverCommit(v6, v7);
        v10 = (volatile LONG *)(v6 + 17272);
        if ( v9 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockExclusive(v10, v9);
        if ( v7 )
        {
LABEL_28:
          if ( (ULONG *)v6 == &MiSystemPartition && !*(_DWORD *)(v6 + 17296) )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
            CachedCommit = CurrentPrcb->CachedCommit;
            for ( i = v7 + CachedCommit; i <= 0x100; i = v14 + v7 )
            {
              v14 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                      v7 + CachedCommit,
                      CachedCommit);
              if ( v14 == CachedCommit )
                return;
              CachedCommit = v14;
            }
          }
          _InterlockedAdd64((volatile signed __int64 *)(v6 + 23168), -v7);
          MiSignalCommitSignals(v6, _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 23104), -v7) - v7);
        }
      }
    }
  }
  else if ( (v2 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 102);
      MiFreeLargePageChain(a1 + 16, a2);
    }
    v15 = *(_QWORD *)(a1 + 48);
    v16 = *(_QWORD *)(a1 + 8);
    if ( v15 != v16 )
      MiReturnExcessPoolCharges(v16 - v15, 0LL);
  }
  else if ( (v2 & 0x100) == 0 )
  {
    MiReturnPhysicalPoolPages(*(_QWORD *)a1, a1 + 16);
  }
}
