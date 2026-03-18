/*
 * XREFs of MiStartingOffset @ 0x14036CEA0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiAdvanceVadView @ 0x1403158A0 (MiAdvanceVadView.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiReadyFlushMdlToWrite @ 0x14036CDF4 (MiReadyFlushMdlToWrite.c)
 *     MiStartingOffsetNeedLock @ 0x14036D190 (MiStartingOffsetNeedLock.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiProtoFaultLog @ 0x140457240 (MiProtoFaultLog.c)
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiViewMayContainPage @ 0x1404C70F4 (MiViewMayContainPage.c)
 *     MiInitializeCachedExtentWalker @ 0x1405044E8 (MiInitializeCachedExtentWalker.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiLocateCachedExtent @ 0x140511E14 (MiLocateCachedExtent.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140A526F0 (MiPfAllocateMdls.c)
 *     MiCommitFileBackedSection @ 0x140A58878 (MiCommitFileBackedSection.c)
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x14036CFCC (MiLocateSessionProtosInSubsection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
