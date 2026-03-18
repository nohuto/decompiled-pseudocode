/*
 * XREFs of MiReleaseNonPagedResources @ 0x14028C070
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020607C (MiReplenishSlabAllocator.c)
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiRebuildLargePage @ 0x14028FF24 (MiRebuildLargePage.c)
 *     MiFreeSlabEntry @ 0x1402A7A6C (MiFreeSlabEntry.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1402F445C (MiReplenishUltraPageTables.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     MmFreeNonChargedSecurePages @ 0x1403C2E54 (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x1403C3010 (MiFreeSecureKernelPage.c)
 *     MiFreeLargePageCharges @ 0x1403C4704 (MiFreeLargePageCharges.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     MiDeleteProcessShadow @ 0x140483DCC (MiDeleteProcessShadow.c)
 *     MiManageUltraSpacePageTable @ 0x14049504C (MiManageUltraSpacePageTable.c)
 *     MiMapPageFileHash @ 0x1404A0244 (MiMapPageFileHash.c)
 *     MiFreePageFileHashPfns @ 0x1404B2A90 (MiFreePageFileHashPfns.c)
 *     MiObtainMdlCharges @ 0x1404CA0EC (MiObtainMdlCharges.c)
 *     MiGetFileHashPage @ 0x1404DC348 (MiGetFileHashPage.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiFindContiguousPagesFinish @ 0x1404F702C (MiFindContiguousPagesFinish.c)
 *     MiReturnMdlCharges @ 0x140501A88 (MiReturnMdlCharges.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140505F80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiDeleteSubsectionLargePages @ 0x140510EFC (MiDeleteSubsectionLargePages.c)
 *     MiPfnRangeIsZero @ 0x1406E9BA0 (MiPfnRangeIsZero.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MiUnlinkBadPages @ 0x1406F1FDC (MiUnlinkBadPages.c)
 *     MiMoveBadPagePartition @ 0x1407093D4 (MiMoveBadPagePartition.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14070ADDC (MiStoreReleaseReservedPageCharges.c)
 *     MiProcessVaContiguityInformation @ 0x14070B810 (MiProcessVaContiguityInformation.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14070D17C (MiMoveBadPageChargesCrossPartition.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x14071245C (MiSoftFaultClusterTradeGetPage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14086A430 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateFastAwePages @ 0x1408776E8 (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140ABD950 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140B30FC0 (MiChargeSystemImageCommitment.c)
 *     MiCreateBootSlabEntries @ 0x140CFE048 (MiCreateBootSlabEntries.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
