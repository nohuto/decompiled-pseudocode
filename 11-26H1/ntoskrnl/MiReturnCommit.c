/*
 * XREFs of MiReturnCommit @ 0x14036F050
 * Callers:
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     MiDoubleLockMdlPage @ 0x1402C7954 (MiDoubleLockMdlPage.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402D4790 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x1402D7FE0 (MiChargeForLockedPage.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiObtainSystemCharges @ 0x14033CB70 (MiObtainSystemCharges.c)
 *     MiRemoveMappedPtes @ 0x140341C78 (MiRemoveMappedPtes.c)
 *     MiObtainPoolCharges @ 0x140368124 (MiObtainPoolCharges.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiReturnCloneCharges @ 0x14036E844 (MiReturnCloneCharges.c)
 *     MiReturnPoolCharges @ 0x14036EFB8 (MiReturnPoolCharges.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x14037405C (MiReleaseUnusedPageFileReadResources.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiDeleteSegmentPages @ 0x1404727CC (MiDeleteSegmentPages.c)
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 *     MiReleaseLockedVaLeafCharges @ 0x1404AD45C (MiReleaseLockedVaLeafCharges.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MiPfPrepareForPageFileRead @ 0x1406FBBF0 (MiPfPrepareForPageFileRead.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiEmptyProcessorCommitCache @ 0x14070A4B8 (MiEmptyProcessorCommitCache.c)
 *     MiReflectCommitRemovedFromPartition @ 0x14070E2F4 (MiReflectCommitRemovedFromPartition.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     MiCompleteMemoryRemoval @ 0x14086C0DC (MiCompleteMemoryRemoval.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiCreatePagingFileCleanup @ 0x14086EC18 (MiCreatePagingFileCleanup.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x14086F5B8 (MiFreePartitionPhysicalPages.c)
 *     MiDeletePagingFiles @ 0x140871C3C (MiDeletePagingFiles.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     MiCreateImageMapFreeResources @ 0x140A631D8 (MiCreateImageMapFreeResources.c)
 *     MiSectionProtectReturnCharges @ 0x140A86D54 (MiSectionProtectReturnCharges.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 *     MiUnmapReturnSystemCommit @ 0x140AA7B48 (MiUnmapReturnSystemCommit.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MiUnmapReturnCharges @ 0x140ACA14C (MiUnmapReturnCharges.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 */

void __fastcall MiReturnCommit(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // rsi
  volatile LONG *v7; // rcx
  unsigned __int64 v8; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v11; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return;
  v4 = a2;
  if ( *(_QWORD *)(a1 + 17288) && (a3 & 0x10) == 0 )
  {
    v6 = (_DWORD *)(a1 + 17272);
    v7 = (volatile LONG *)(a1 + 17272);
    if ( KeGetCurrentIrql() == 2 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v7);
      v4 = MiRestockOverCommit(a1, v4);
    }
    else
    {
      v8 = ExAcquireSpinLockExclusive(v7);
      v4 = MiRestockOverCommit(a1, v4);
      if ( (_BYTE)v8 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v6 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
        __writecr8(v8);
LABEL_18:
        if ( !v4 )
          return;
        goto LABEL_19;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v6 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
    goto LABEL_18;
  }
LABEL_19:
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    if ( (a3 & 0x10) == 0 )
LABEL_27:
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), -v4);
LABEL_28:
    MiSignalCommitSignals(a1, _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23104), -v4) - v4);
    return;
  }
  if ( (a3 & 0x10) != 0 )
    goto LABEL_28;
  if ( *(_DWORD *)(a1 + 17296) )
    goto LABEL_27;
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
  CachedCommit = CurrentPrcb->CachedCommit;
  if ( (unsigned __int64)(v4 + CachedCommit) > 0x100 )
    goto LABEL_27;
  while ( 1 )
  {
    v11 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
            v4 + CachedCommit,
            CachedCommit);
    if ( v11 == CachedCommit )
      break;
    CachedCommit = v11;
    if ( (unsigned __int64)(v11 + v4) > 0x100 )
      goto LABEL_27;
  }
}
