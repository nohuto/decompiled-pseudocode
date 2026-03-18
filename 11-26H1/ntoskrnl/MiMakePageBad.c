/*
 * XREFs of MiMakePageBad @ 0x1404BAA50
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140AC642C (MiScrubNode.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, char a2)
{
  __int64 v4; // rbx
  void *PoolMm; // rdi
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rsi

  v4 = 48 * a1 - 0x220000000000LL;
  PoolMm = (void *)ExAllocatePoolMm(
                     64LL,
                     0x20uLL,
                     1816291661,
                     KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v7 = MiSafeLockPage(a1, v6);
  v8 = v7;
  if ( v7 != 17 )
  {
    if ( !MiIsPageOnBadList(v4) )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(v4 + 32) & 0x40000000) == 0 )
      {
        MiAcquireNonPagedResources(
          *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
          1uLL,
          0LL,
          1LL);
        MiSetPfnRemovalRequested(v4, 1LL, PoolMm);
        PoolMm = 0LL;
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E2EB88.SchedulerApcFill5[44]);
      }
      if ( (a2 & 2) != 0 )
        MiInsertPageInFreeOrZeroedList(a1);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v8 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v8);
    }
  }
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
}
