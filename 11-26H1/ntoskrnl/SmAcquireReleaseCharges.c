/*
 * XREFs of SmAcquireReleaseCharges @ 0x140396390
 * Callers:
 *     SmFpFree @ 0x140280590 (SmFpFree.c)
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     SmKmFreeMdlForLock @ 0x140384DDC (SmKmFreeMdlForLock.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmKmAllocateMdlForLock @ 0x140396230 (SmKmAllocateMdlForLock.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmFpPreAllocate @ 0x1403E9990 (SmFpPreAllocate.c)
 *     SmFpCleanup @ 0x1403E9CB0 (SmFpCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403EE368 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MmReleaseResourceCharge @ 0x1404541D0 (MmReleaseResourceCharge.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rbx
  int v6; // r15d
  int v7; // ebp
  __int64 v8; // rsi
  int v9; // eax
  _DWORD *v10; // r14
  volatile LONG *v11; // rcx
  unsigned __int64 v12; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v15; // rcx
  unsigned int v17; // edi
  unsigned int v18; // r14d
  int v19; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(__int64 **)(a1 + 2208);
  v5 = a2 >> 12;
  v6 = a3 & 1;
  v7 = a3 & 2;
  v8 = *v4;
  if ( a4 )
  {
    if ( (a3 & 2) != 0 )
      MiReturnResident(*v4, a2 >> 12);
    v9 = v6 & 1;
    if ( !v7 )
      v9 = v6;
    if ( !v9 || !v5 )
      return 1LL;
    if ( !*(_QWORD *)(v8 + 17288) )
    {
LABEL_24:
      if ( (ULONG *)v8 != &MiSystemPartition
        || *(_DWORD *)(v8 + 17296)
        || (CurrentPrcb = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
            CachedCommit = CurrentPrcb->CachedCommit,
            v5 + CachedCommit > 0x100) )
      {
LABEL_29:
        _InterlockedAdd64((volatile signed __int64 *)(v8 + 23168), -(__int64)v5);
        MiSignalCommitSignals(v8, _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 23104), -(__int64)v5) - v5);
      }
      else
      {
        while ( 1 )
        {
          v15 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                  v5 + CachedCommit,
                  CachedCommit);
          if ( v15 == CachedCommit )
            break;
          CachedCommit = v15;
          if ( v15 + v5 > 0x100 )
            goto LABEL_29;
        }
      }
      return 1LL;
    }
    v10 = (_DWORD *)(v8 + 17272);
    v11 = (volatile LONG *)(v8 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
      v5 = MiRestockOverCommit(v8, v5);
    }
    else
    {
      v12 = ExAcquireSpinLockExclusive(v11);
      v5 = MiRestockOverCommit(v8, v5);
      if ( (_BYTE)v12 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v10 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v8 + 17272), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        __writecr8(v12);
LABEL_23:
        if ( v5 )
          goto LABEL_24;
        return 1LL;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v10 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v8 + 17272), retaddr);
    goto LABEL_23;
  }
  v17 = 0;
  v18 = 0;
  if ( (a3 & 2) == 0 )
    goto LABEL_34;
  if ( (unsigned int)MiChargeResident((ULONG *)*v4, a2 >> 12, 0LL) )
  {
    v18 = 2;
LABEL_34:
    v19 = v6 & 1;
    if ( !v7 )
      v19 = v6;
    if ( !v19 || (unsigned int)MiChargeCommit((ULONG *)v8, v5, 1u) )
    {
      return 1;
    }
    else if ( v18 )
    {
      MmReleaseResourceCharge(v4, v5, v18, 0LL);
    }
  }
  return v17;
}
