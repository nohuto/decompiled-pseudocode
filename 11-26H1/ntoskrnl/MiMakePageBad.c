/*
 * XREFs of MiMakePageBad @ 0x1404B42D8
 * Callers:
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, char a2)
{
  __int64 v4; // rbx
  void *PoolMm; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rsi

  v4 = 48 * a1 - 0x220000000000LL;
  PoolMm = (void *)ExAllocatePoolMm(
                     64LL,
                     0x20uLL,
                     1816291661,
                     KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v8 = MiSafeLockPage(a1, v6, v7);
  v9 = v8;
  if ( v8 != 17 )
  {
    if ( !MiIsPageOnBadList(v4) )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(v4 + 32) & 0x40000000) == 0 )
      {
        MiAcquireNonPagedResources(
          *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
          1uLL,
          0LL,
          1LL);
        MiSetPfnRemovalRequested(v4, 1LL, PoolMm);
        PoolMm = 0LL;
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E2ED08.SchedulerApcFill5[44]);
      }
      if ( (a2 & 2) != 0 )
        MiInsertPageInFreeOrZeroedList(a1);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v9 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
      __writecr8(v9);
    }
  }
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
}
