/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14040DF60
 * Callers:
 *     MiApplyDebuggerPatches @ 0x14038C7F8 (MiApplyDebuggerPatches.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14040D5C8 (MiInitializeSelfmap.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040D644 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeImageHeaderPage @ 0x14040D858 (MiInitializeImageHeaderPage.c)
 *     MiBuildMappedClusterComputeBounds @ 0x14040D9C0 (MiBuildMappedClusterComputeBounds.c)
 *     MiBuildMappedClusterFillMdl @ 0x14040DB58 (MiBuildMappedClusterFillMdl.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiPersistMdl @ 0x140508064 (MiPersistMdl.c)
 *     MiFlushCacheMdl @ 0x140516770 (MiFlushCacheMdl.c)
 *     MiArePageContentsZero @ 0x140520384 (MiArePageContentsZero.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiFillPhysicalPagesWithPtes @ 0x1406E72C0 (MiFillPhysicalPagesWithPtes.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiStackTheftFreezeProcessors @ 0x1406F355C (MiStackTheftFreezeProcessors.c)
 *     MiTradeIsolatedThreadStackPage @ 0x1406F3688 (MiTradeIsolatedThreadStackPage.c)
 *     MiZeroTrailingImageBytes @ 0x1406F7900 (MiZeroTrailingImageBytes.c)
 *     MiReplicatePteChangeToProcess @ 0x14070BB80 (MiReplicatePteChangeToProcess.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1407102D0 (MiComputeCacheAttributeSpeeds.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C037CC (MiMirrorOmitPagesFromCopy.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
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
