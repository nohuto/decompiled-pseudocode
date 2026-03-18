/*
 * XREFs of MiReturnCommit @ 0x14036D2B0
 * Callers:
 *     MiDeleteKernelStackPages @ 0x14028E9CC (MiDeleteKernelStackPages.c)
 *     MiDoubleLockMdlPage @ 0x1402E5914 (MiDoubleLockMdlPage.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiProbeLockFrame @ 0x1402EE600 (MiProbeLockFrame.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x1402F5F60 (MiChargeForLockedPage.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiCreateLargePfnList @ 0x14031037C (MiCreateLargePfnList.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiObtainSystemCharges @ 0x14033AAF0 (MiObtainSystemCharges.c)
 *     MiRemoveMappedPtes @ 0x14033FBF8 (MiRemoveMappedPtes.c)
 *     MiObtainPoolCharges @ 0x140366384 (MiObtainPoolCharges.c)
 *     MiGetCloneCharges @ 0x140369494 (MiGetCloneCharges.c)
 *     MiReturnCloneCharges @ 0x14036CAA4 (MiReturnCloneCharges.c)
 *     MiReturnPoolCharges @ 0x14036D218 (MiReturnPoolCharges.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x1403722AC (MiReleaseUnusedPageFileReadResources.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403C2FD8 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiDeleteSegmentPages @ 0x140478E6C (MiDeleteSegmentPages.c)
 *     MiMakePartitionActive @ 0x1404A9C80 (MiMakePartitionActive.c)
 *     MiReturnSystemCharges @ 0x1404B3278 (MiReturnSystemCharges.c)
 *     MiReleaseLockedVaLeafCharges @ 0x1404B3E8C (MiReleaseLockedVaLeafCharges.c)
 *     MiGetSubsectionCharges @ 0x1404B69E0 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MiPfPrepareForPageFileRead @ 0x1406F6F80 (MiPfPrepareForPageFileRead.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MiEmptyProcessorCommitCache @ 0x1407057E8 (MiEmptyProcessorCommitCache.c)
 *     MiReflectCommitRemovedFromPartition @ 0x140709640 (MiReflectCommitRemovedFromPartition.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     MiCompleteMemoryRemoval @ 0x140865CFC (MiCompleteMemoryRemoval.c)
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MiCreatePagingFileCleanup @ 0x140868838 (MiCreatePagingFileCleanup.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x1408691D8 (MiFreePartitionPhysicalPages.c)
 *     MiDeletePagingFiles @ 0x14086B85C (MiDeletePagingFiles.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14095FDBC (MiDecommitRegion.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitExistingVad @ 0x1409C7300 (MiCommitExistingVad.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiChargeSegmentCommit @ 0x1409C9BB0 (MiChargeSegmentCommit.c)
 *     MiCreateImageMapFreeResources @ 0x140A55C50 (MiCreateImageMapFreeResources.c)
 *     MiSectionProtectReturnCharges @ 0x140A80EE4 (MiSectionProtectReturnCharges.c)
 *     MiReturnFullProcessCommitment @ 0x140A82B94 (MiReturnFullProcessCommitment.c)
 *     MiUnmapReturnSystemCommit @ 0x140AAA568 (MiUnmapReturnSystemCommit.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 *     MiUnmapReturnCharges @ 0x140AC855C (MiUnmapReturnCharges.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiDeleteVadBitmap @ 0x140AFAF24 (MiDeleteVadBitmap.c)
 *     MiAllocatePerSessionProtos @ 0x140B11CA8 (MiAllocatePerSessionProtos.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
