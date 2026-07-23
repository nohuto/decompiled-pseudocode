/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14042AE90
 * Callers:
 *     MiApplyDebuggerPatches @ 0x14038E5A8 (MiApplyDebuggerPatches.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14042A4F4 (MiInitializeSelfmap.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14042A570 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeImageHeaderPage @ 0x14042A784 (MiInitializeImageHeaderPage.c)
 *     MiBuildMappedClusterComputeBounds @ 0x14042A8EC (MiBuildMappedClusterComputeBounds.c)
 *     MiBuildMappedClusterFillMdl @ 0x14042AA84 (MiBuildMappedClusterFillMdl.c)
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiPersistMdl @ 0x140501A38 (MiPersistMdl.c)
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiFillPhysicalPagesWithPtes @ 0x1406EBF70 (MiFillPhysicalPagesWithPtes.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiStackTheftFreezeProcessors @ 0x1406F81CC (MiStackTheftFreezeProcessors.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F82F8 (MiTradeIsolatedThreadStackPage.c)
 *     MiZeroTrailingImageBytes @ 0x1406FC570 (MiZeroTrailingImageBytes.c)
 *     MiReplicatePteChangeToProcess @ 0x140710830 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnmapPageInHyperSpaceWorker(unsigned __int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int64 v3; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *MmInternal; // r8
  __int64 result; // rax

  v3 = a2;
  v5 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = 16LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (a3 & 0x10000000) == 0 )
    v6 = 1LL;
  result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *MmInternal = 0LL;
  do
  {
    *v5++ = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    --v6;
  }
  while ( v6 );
  if ( (_BYTE)v3 != 17 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
  return result;
}
