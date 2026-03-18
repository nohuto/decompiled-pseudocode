/*
 * XREFs of MiGetSubsectionFromPte @ 0x1402836C0
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020B9CC (MiStoreModifiedWriteComplete.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14026DF30 (MiCheckAndUpdateIoAttribution.c)
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029F0DC (MiReleaseWsSwapReservationPfn.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiInitializePfn @ 0x1402D7680 (MiInitializePfn.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiProbeLockFrame @ 0x1402EE600 (MiProbeLockFrame.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiReleaseInPageRefs @ 0x140309D08 (MiReleaseInPageRefs.c)
 *     MiAbandonPrivatePfn @ 0x14030B84C (MiAbandonPrivatePfn.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031AE30 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiGetPageForSystemCache @ 0x140339D50 (MiGetPageForSystemCache.c)
 *     MiInitializePfnForOtherProcess @ 0x14033B798 (MiInitializePfnForOtherProcess.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiInitializeEnclavePfn @ 0x140341AA8 (MiInitializeEnclavePfn.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiResolveMappedFileFaultInitialize @ 0x14036F9B8 (MiResolveMappedFileFaultInitialize.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     MiComputeImagePteIndex @ 0x14038CEF4 (MiComputeImagePteIndex.c)
 *     MiIssueHardFaultIo @ 0x14038EA50 (MiIssueHardFaultIo.c)
 *     MiMarkMdlComplete @ 0x1403BB314 (MiMarkMdlComplete.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiBuildMappedClusterInitialize @ 0x14040DE80 (MiBuildMappedClusterInitialize.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x14045C8B0 (MiUnlinkStandbyPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x14045CC24 (MiStoreMarkLockedPagesModified.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiTrimSharedPage @ 0x140478A54 (MiTrimSharedPage.c)
 *     MiInitializeDemandFillProtoContents @ 0x14048737C (MiInitializeDemandFillProtoContents.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiInsertPageLockModNoWriteList @ 0x1404D9364 (MiInsertPageLockModNoWriteList.c)
 *     MiPreventControlAreaDeletion @ 0x1404F62AC (MiPreventControlAreaDeletion.c)
 *     MiMapSystemCachePage @ 0x1404FFD9C (MiMapSystemCachePage.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406F9B58 (MiFileOnlyPfnMarkedBad.c)
 *     MiDbgMarkPfnModified @ 0x1406FE520 (MiDbgMarkPfnModified.c)
 *     MiDbgPatchIdentity @ 0x1406FE974 (MiDbgPatchIdentity.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D04294 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(unsigned __int64 a1)
{
  __int64 v1; // rcx

  if ( qword_140E2D740 && (a1 & 0x10) == 0 )
    a1 &= qword_140E2D748;
  v1 = (a1 >> 12) & 0x3FFFFFFFFFFLL;
  if ( v1 )
    return qword_140E37B90 + 8 * v1 - 8;
  else
    return 0LL;
}
