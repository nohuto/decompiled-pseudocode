/*
 * XREFs of MiChargeCommit @ 0x1402D8520
 * Callers:
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiDoubleLockMdlPage @ 0x1402C7954 (MiDoubleLockMdlPage.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402D4790 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiChargeForWriteInProgressPage @ 0x1402D7C50 (MiChargeForWriteInProgressPage.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x1402D7FE0 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiObtainSystemCharges @ 0x14033CB70 (MiObtainSystemCharges.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     MiObtainPoolCharges @ 0x140368124 (MiObtainPoolCharges.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036CA50 (MiCopyOnWriteCombineCloneDereference.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     MmChargeResources @ 0x1403962F0 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiMakePartitionActive @ 0x1404A3310 (MiMakePartitionActive.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E9508 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiInitializeCommitment @ 0x14070A674 (MiInitializeCommitment.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiCreatePagingFileCommit @ 0x1409894E4 (MiCreatePagingFileCommit.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 *     MiCreateImageMapFinish @ 0x140A624DC (MiCreateImageMapFinish.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 */

__int64 __fastcall MiChargeCommit(ULONG *a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 i; // rcx
  int v8; // eax
  signed __int32 v10; // eax

  do
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a1 == &MiSystemPartition && (a3 & 0x10) == 0 )
    {
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      for ( i = CurrentPrcb->CachedCommit; a2 <= i; i = v10 )
      {
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i - a2, i);
        if ( v10 == i )
          return 1LL;
      }
    }
    v8 = MiChargeCommitSlow((__int64)a1, a2, a3, (__int64)CurrentPrcb);
    if ( v8 >= 0 )
      return 1LL;
  }
  while ( v8 == -1073741267 );
  return 0LL;
}
