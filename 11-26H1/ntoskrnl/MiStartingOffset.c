/*
 * XREFs of MiStartingOffset @ 0x14036EC40
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiAdvanceVadView @ 0x1403178D0 (MiAdvanceVadView.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiReadyFlushMdlToWrite @ 0x14036EB94 (MiReadyFlushMdlToWrite.c)
 *     MiStartingOffsetNeedLock @ 0x14036EF30 (MiStartingOffsetNeedLock.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiProtoFaultLog @ 0x14044EAB0 (MiProtoFaultLog.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiViewMayContainPage @ 0x1404C09A8 (MiViewMayContainPage.c)
 *     MiInitializeCachedExtentWalker @ 0x1404FDCAC (MiInitializeCachedExtentWalker.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiLocateCachedExtent @ 0x14050B884 (MiLocateCachedExtent.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140A5B9E0 (MiPfAllocateMdls.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x14036ED6C (MiLocateSessionProtosInSubsection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int8 CurrentIrql; // r14
  __int64 SessionProtosInSubsection; // rbp

  v3 = *a1;
  v7 = a1[1];
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 )
  {
    if ( a2 < v7 || a2 >= v7 + 8LL * *((unsigned int *)a1 + 11) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a1, a3);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v8 = ((a2 - *(_QWORD *)(SessionProtosInSubsection + 72)) << 9) & 0xFFFFFFFFFFFFF000uLL;
      v9 = (unsigned __int64)*((unsigned int *)a1 + 9) << 9;
    }
    else
    {
      v8 = ((a2 - v7) << 9) & 0xFFFFFFFFFFFFF000uLL;
      v9 = (unsigned __int64)*((unsigned int *)a1 + 9) << 9;
    }
  }
  else
  {
    if ( v7 )
      v8 = (__int64)(a2 - v7) >> 3 << 12;
    else
      v8 = 0LL;
    v9 = (*((unsigned int *)a1 + 9) | ((unsigned __int64)(a1[4] & 0xFFC0) << 26)) << 12;
  }
  return v8 + v9;
}
