/*
 * XREFs of MiCanPfnOriginalPteBeLost @ 0x140408680
 * Callers:
 *     MiConvertLargePfnToSmall @ 0x140206D40 (MiConvertLargePfnToSmall.c)
 *     MiStoreModifiedWriteComplete @ 0x14020B9CC (MiStoreModifiedWriteComplete.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029F0DC (MiReleaseWsSwapReservationPfn.c)
 *     MiFreeLargeZeroPages @ 0x1402A5600 (MiFreeLargeZeroPages.c)
 *     MiInitializePfn @ 0x1402D7680 (MiInitializePfn.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiAbandonPrivatePfn @ 0x14030B84C (MiAbandonPrivatePfn.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiDeleteSectionCluster @ 0x140318360 (MiDeleteSectionCluster.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiInitializePfnForOtherProcess @ 0x14033B798 (MiInitializePfnForOtherProcess.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiDeleteEnclavePage @ 0x140340600 (MiDeleteEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x140341AA8 (MiInitializeEnclavePfn.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiMarkMdlComplete @ 0x1403BB314 (MiMarkMdlComplete.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403C5CF0 (MiConvertLockedSmallPageToLarge.c)
 *     MiModwriterAssignPageFileAddresses @ 0x140407170 (MiModwriterAssignPageFileAddresses.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiIsPfnOriginalPteLost @ 0x140408658 (MiIsPfnOriginalPteLost.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MiConvertLargeActivePageToChain @ 0x14040A4E0 (MiConvertLargeActivePageToChain.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiInsertDemotedPages @ 0x1404346F0 (MiInsertDemotedPages.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x14045C8B0 (MiUnlinkStandbyPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x14045CC24 (MiStoreMarkLockedPagesModified.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiMapPageFileHash @ 0x1404A0244 (MiMapPageFileHash.c)
 *     MiMapSystemCachePage @ 0x1404FFD9C (MiMapSystemCachePage.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiDbgMarkPfnModified @ 0x1406FE520 (MiDbgMarkPfnModified.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D04294 (MiInsertRegistryPageInModifiedList.c)
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
