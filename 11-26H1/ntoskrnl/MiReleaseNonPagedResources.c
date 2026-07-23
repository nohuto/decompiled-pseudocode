/*
 * XREFs of MiReleaseNonPagedResources @ 0x14028B5D0
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402D4790 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MmFreeNonChargedSecurePages @ 0x1403CCD54 (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x1403CCF10 (MiFreeSecureKernelPage.c)
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiFreePageFileHashPfns @ 0x1404AC10C (MiFreePageFileHashPfns.c)
 *     MiObtainMdlCharges @ 0x1404C3B1C (MiObtainMdlCharges.c)
 *     MiGetFileHashPage @ 0x1404D5A28 (MiGetFileHashPage.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     MiFindContiguousPagesFinish @ 0x1404F063C (MiFindContiguousPagesFinish.c)
 *     MiReturnMdlCharges @ 0x1404FB278 (MiReturnMdlCharges.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1404FF830 (MiPrefetchReleasePreallocatedPages.c)
 *     MiDeleteSubsectionLargePages @ 0x14050A96C (MiDeleteSubsectionLargePages.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MiUnlinkBadPages @ 0x1406F6C4C (MiUnlinkBadPages.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14070FA90 (MiStoreReleaseReservedPageCharges.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140711E2C (MiMoveBadPageChargesCrossPartition.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140B331C0 (MiChargeSystemImageCommitment.c)
 *     MiCreateBootSlabEntries @ 0x140D043F0 (MiCreateBootSlabEntries.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 */

__int64 __fastcall MiReleaseNonPagedResources(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _DWORD *v5; // rsi
  volatile LONG *v6; // rcx
  unsigned __int64 v7; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v10; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( !a2 )
    return MiReturnResident(a1, a2);
  if ( *(_QWORD *)(a1 + 17288) )
  {
    v5 = (_DWORD *)(a1 + 17272);
    v6 = (volatile LONG *)(a1 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v6);
      v4 = MiRestockOverCommit(a1, v4);
    }
    else
    {
      v7 = ExAcquireSpinLockExclusive(v6);
      v4 = MiRestockOverCommit(a1, a2);
      if ( (_BYTE)v7 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v5 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
        __writecr8(v7);
LABEL_17:
        if ( !v4 )
          return MiReturnResident(a1, a2);
        goto LABEL_18;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v5 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
    goto LABEL_17;
  }
LABEL_18:
  if ( (ULONG *)a1 != &MiSystemPartition
    || *(_DWORD *)(a1 + 17296)
    || (CurrentPrcb = KeGetCurrentPrcb(),
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
        CachedCommit = CurrentPrcb->CachedCommit,
        (unsigned __int64)(v4 + CachedCommit) > 0x100) )
  {
LABEL_23:
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), -v4);
    MiSignalCommitSignals(a1, _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23104), -v4) - v4);
  }
  else
  {
    while ( 1 )
    {
      v10 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
              v4 + CachedCommit,
              CachedCommit);
      if ( v10 == CachedCommit )
        break;
      CachedCommit = v10;
      if ( (unsigned __int64)(v10 + v4) > 0x100 )
        goto LABEL_23;
    }
  }
  return MiReturnResident(a1, a2);
}
