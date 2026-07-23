/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140287440
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x140251450 (MiFlushCacheForAttributeChange.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiReplaceTransitionPageFinish @ 0x140293E78 (MiReplaceTransitionPageFinish.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiArePagefileContentsCorrupted @ 0x1402BD7B0 (MiArePagefileContentsCorrupted.c)
 *     MiMakeProtoTransition @ 0x1402BE8B0 (MiMakeProtoTransition.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14031C190 (MiConfirmPageIsZero.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031D030 (MiRewriteTrimPteAsDemandZero.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiCopySinglePage @ 0x14033D2C8 (MiCopySinglePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiWriteRepurposedTransitionPte @ 0x1403440B0 (MiWriteRepurposedTransitionPte.c)
 *     MiCopyTopLevelMappings @ 0x140344208 (MiCopyTopLevelMappings.c)
 *     MiApplyDebuggerPatches @ 0x14038E5A8 (MiApplyDebuggerPatches.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14042A4F4 (MiInitializeSelfmap.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14042A570 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeImageHeaderPage @ 0x14042A784 (MiInitializeImageHeaderPage.c)
 *     MiBuildMappedCluster @ 0x14042A81C (MiBuildMappedCluster.c)
 *     MiBuildMappedClusterComputeBounds @ 0x14042A8EC (MiBuildMappedClusterComputeBounds.c)
 *     MiBuildMappedClusterFillMdl @ 0x14042AA84 (MiBuildMappedClusterFillMdl.c)
 *     MiWritePageFileHash @ 0x140469E18 (MiWritePageFileHash.c)
 *     MiClearContainingMapping @ 0x14047DBC0 (MiClearContainingMapping.c)
 *     MiInitializeDemandFillProtoContents @ 0x140480DBC (MiInitializeDemandFillProtoContents.c)
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MmStealTopLevelPage @ 0x1404BC7D4 (MmStealTopLevelPage.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MmUpdateUserShadowStackValue @ 0x1404DA2DC (MmUpdateUserShadowStackValue.c)
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
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v3; // ebx
  int v6; // eax
  signed int v7; // ebx
  char v8; // bp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  bool v11; // al
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rbp
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r8
  unsigned __int64 *v19; // rdx
  unsigned __int8 CurrentIrql; // di

  v3 = 1;
  if ( (a3 & 0x20000000) == 0 )
    v3 = 4;
  if ( (a3 & 0x40000000) != 0 )
  {
    v6 = a3 & 3;
    if ( v6 == 2 )
    {
      v3 |= 0x2000000u;
LABEL_8:
      v3 |= 0x18u;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = (*(_DWORD *)(48 * a1 - 0x21FFFFFFFFE0LL) >> 22) & 3;
  }
  if ( v6 && v6 != 3 )
  {
    if ( v6 != 2 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v3 |= 8u;
LABEL_9:
  v7 = v3 | 0xA0000000;
  v8 = v7 & 0x1F;
  v9 = ((a1 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v7 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
  v10 = (unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8;
  v11 = v7 < 0;
  v12 = ((a1 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v7 & 0x1F] & 0xFFF0000000000E7FuLL | 0x163;
  if ( (v8 & 5) != 4 || !v11 )
    v12 = v9;
  v13 = (v10 ^ v12) & 0xFAFFFFFFFFFFFEFFuLL;
  v14 = v10 & 0xFAFFFFFFFFFFFFFFuLL;
  v15 = v14 ^ v13 | 0xA00000000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
    }
    *a2 = CurrentIrql;
  }
  v16 = 16LL;
  if ( (a3 & 0x10000000) == 0 )
    v16 = 1LL;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  UltraMapping = MiGetUltraMapping(
                   &MmInternal[4 * (3 - (unsigned int)((a3 & 0x10000000) != 0)) + 1],
                   3 - (unsigned int)((a3 & 0x10000000) != 0),
                   v16,
                   4LL);
  v19 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *MmInternal = v19;
  do
  {
    *v19++ = v15;
    v15 = (v15 + 4096) ^ (v15 ^ (v15 + 4096)) & 0xFFF0000000000FFFuLL;
    --v16;
  }
  while ( v16 );
  return UltraMapping;
}
