/*
 * XREFs of MiChargeCommit @ 0x1402F64A0
 * Callers:
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiDoubleLockMdlPage @ 0x1402E5914 (MiDoubleLockMdlPage.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiProbeLockFrame @ 0x1402EE600 (MiProbeLockFrame.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiChargeForWriteInProgressPage @ 0x1402F5BD0 (MiChargeForWriteInProgressPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x1402F5F60 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     MiCreateLargePfnList @ 0x14031037C (MiCreateLargePfnList.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiObtainSystemCharges @ 0x14033AAF0 (MiObtainSystemCharges.c)
 *     RtlpHpEnvAllocVA @ 0x140364570 (RtlpHpEnvAllocVA.c)
 *     MiObtainPoolCharges @ 0x140366384 (MiObtainPoolCharges.c)
 *     MiGetCloneCharges @ 0x140369494 (MiGetCloneCharges.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036ACB0 (MiCopyOnWriteCombineCloneDereference.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036B2E0 (MiCopyOnWriteUpdatePte.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14038FF90 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     MmChargeResources @ 0x140394570 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiMakePartitionActive @ 0x1404A9C80 (MiMakePartitionActive.c)
 *     MiGetSubsectionCharges @ 0x1404B69E0 (MiGetSubsectionCharges.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiInitializeCommitment @ 0x1407059A4 (MiInitializeCommitment.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MiCreatePagingFileCommit @ 0x1409B8504 (MiCreatePagingFileCommit.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1409C7944 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x1409C9BB0 (MiChargeSegmentCommit.c)
 *     MiCreateImageMapFinish @ 0x140A54F3C (MiCreateImageMapFinish.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x140B11CA8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiChargeCommitSlow @ 0x1402F4DE8 (MiChargeCommitSlow.c)
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
