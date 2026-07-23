/*
 * XREFs of MiCanPfnOriginalPteBeLost @ 0x140401770
 * Callers:
 *     MiConvertLargePfnToSmall @ 0x140206E20 (MiConvertLargePfnToSmall.c)
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029E62C (MiReleaseWsSwapReservationPfn.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiAbandonPrivatePfn @ 0x1402ED8CC (MiAbandonPrivatePfn.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiDeleteEnclavePage @ 0x140342680 (MiDeleteEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x140343B28 (MiInitializeEnclavePfn.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiMarkMdlComplete @ 0x1403C5184 (MiMarkMdlComplete.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403CFBF0 (MiConvertLockedSmallPageToLarge.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140400260 (MiModwriterAssignPageFileAddresses.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiIsPfnOriginalPteLost @ 0x140401748 (MiIsPfnOriginalPteLost.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreWriteProcessFailedPages @ 0x140402824 (MiStoreWriteProcessFailedPages.c)
 *     MiConvertLargeActivePageToChain @ 0x1404035D0 (MiConvertLargeActivePageToChain.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x1404567CC (MiStoreMarkLockedPagesModified.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiMapSystemCachePage @ 0x1404F958C (MiMapSystemCachePage.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D0A564 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCanPfnOriginalPteBeLost(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  if ( *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = (__int64)((unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    return (v5 & 0xFFFFFFFFFFLL) == (v6 >> 63) + v6;
  }
  v3 = (__int64)(v2 << 25) >> 16;
  return v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL;
}
