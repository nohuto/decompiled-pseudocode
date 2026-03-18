/*
 * XREFs of MiRemoveBadPages @ 0x1406F17A0
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiUnlinkPageFromBadList @ 0x1402C8074 (MiUnlinkPageFromBadList.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiReturnBadPagesToBadList @ 0x1406F1C24 (MiReturnBadPagesToBadList.c)
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRemoveBadPages(_WORD *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  ULONG_PTR v4; // rsi
  __int64 v7; // rbx
  unsigned __int64 i; // rbp
  unsigned int v9; // edi
  void *PoolMm; // r15
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // r14
  __int64 *v14; // rcx

  v4 = a2;
  if ( (MiFlags & 0x40000000) == 0 )
    return 3221225474LL;
  v7 = 48 * a2 - 0x220000000000LL;
  for ( i = 0LL; ; ++i )
  {
    v9 = 0;
    if ( i >= a3 )
      break;
    PoolMm = (void *)ExAllocatePoolMm(
                       64LL,
                       0x20uLL,
                       1816291661,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v12 = MiSafeLockPage(v4, v11);
    v13 = v12;
    if ( v12 == 17 )
    {
      v9 = -1073741585;
      goto LABEL_22;
    }
    if ( _bittest64((const signed __int64 *)(v7 + 40), 0x35u) )
    {
      v9 = -1073741585;
      goto LABEL_17;
    }
    if ( ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FF) != *a1 )
    {
      v9 = -1073740277;
      goto LABEL_17;
    }
    if ( !MiIsPageOnBadList(v7) )
    {
      v9 = -1073740682;
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v13 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v13);
      }
LABEL_22:
      if ( PoolMm )
        ExFreePoolWithTag(PoolMm, 0);
      if ( i )
        MiReturnBadPagesToBadList(v4 - i, i);
      return v9;
    }
    MiUnlinkPageFromBadList(v14, 0);
    MiSetPfnRemovalRequested(v7, 1LL, PoolMm);
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v13 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
    }
    ++v4;
    v7 += 48LL;
  }
  return v9;
}
