/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140287EE0
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x14024FAF0 (MiFlushCacheForAttributeChange.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287AA0 (MiGetPageChainSmallPageProcess.c)
 *     MiFillPhysicalPages @ 0x140289560 (MiFillPhysicalPages.c)
 *     MiReplaceTransitionPageFinish @ 0x140294918 (MiReplaceTransitionPageFinish.c)
 *     MiZeroAndConvertPage @ 0x1402A14B0 (MiZeroAndConvertPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiArePagefileContentsCorrupted @ 0x1402DB9F0 (MiArePagefileContentsCorrupted.c)
 *     MiMakeProtoTransition @ 0x1402DCAF0 (MiMakeProtoTransition.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14031A160 (MiConfirmPageIsZero.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031B000 (MiRewriteTrimPteAsDemandZero.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiCopySinglePage @ 0x14033B248 (MiCopySinglePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiWriteRepurposedTransitionPte @ 0x140342030 (MiWriteRepurposedTransitionPte.c)
 *     MiCopyTopLevelMappings @ 0x140342188 (MiCopyTopLevelMappings.c)
 *     MiApplyDebuggerPatches @ 0x14038C7F8 (MiApplyDebuggerPatches.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14040D5C8 (MiInitializeSelfmap.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040D644 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeImageHeaderPage @ 0x14040D858 (MiInitializeImageHeaderPage.c)
 *     MiBuildMappedCluster @ 0x14040D8F0 (MiBuildMappedCluster.c)
 *     MiBuildMappedClusterComputeBounds @ 0x14040D9C0 (MiBuildMappedClusterComputeBounds.c)
 *     MiBuildMappedClusterFillMdl @ 0x14040DB58 (MiBuildMappedClusterFillMdl.c)
 *     MiWritePageFileHash @ 0x140470698 (MiWritePageFileHash.c)
 *     MiClearContainingMapping @ 0x140484250 (MiClearContainingMapping.c)
 *     MiInitializeDemandFillProtoContents @ 0x14048737C (MiInitializeDemandFillProtoContents.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MmStealTopLevelPage @ 0x1404C2F84 (MmStealTopLevelPage.c)
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
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
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiUserPdeOrAbove @ 0x1402A1440 (MiUserPdeOrAbove.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  v10 = (unsigned __int64)BYTE4(stru_140E2D930.Header.WaitListHead.Blink) << 8;
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
