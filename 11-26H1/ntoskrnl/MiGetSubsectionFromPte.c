/*
 * XREFs of MiGetSubsectionFromPte @ 0x140282C30
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14026D4A0 (MiCheckAndUpdateIoAttribution.c)
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14029E62C (MiReleaseWsSwapReservationPfn.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiReleaseInPageRefs @ 0x1402EBD88 (MiReleaseInPageRefs.c)
 *     MiAbandonPrivatePfn @ 0x1402ED8CC (MiAbandonPrivatePfn.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiGetPageForSystemCache @ 0x14033BDD0 (MiGetPageForSystemCache.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiInitializeEnclavePfn @ 0x140343B28 (MiInitializeEnclavePfn.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiResolveMappedFileFaultInitialize @ 0x140371768 (MiResolveMappedFileFaultInitialize.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     MiComputeImagePteIndex @ 0x14038ECA0 (MiComputeImagePteIndex.c)
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiMarkMdlComplete @ 0x1403C5184 (MiMarkMdlComplete.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiStoreWriteProcessFailedPages @ 0x140402824 (MiStoreWriteProcessFailedPages.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiBuildMappedClusterInitialize @ 0x14042ADAC (MiBuildMappedClusterInitialize.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiStoreMarkLockedPagesModified @ 0x1404567CC (MiStoreMarkLockedPagesModified.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiInitializeDemandFillProtoContents @ 0x140480DBC (MiInitializeDemandFillProtoContents.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiInsertPageLockModNoWriteList @ 0x1404D2A44 (MiInsertPageLockModNoWriteList.c)
 *     MiPreventControlAreaDeletion @ 0x1404EF8B8 (MiPreventControlAreaDeletion.c)
 *     MiMapSystemCachePage @ 0x1404F958C (MiMapSystemCachePage.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 *     MiDbgPatchIdentity @ 0x140703644 (MiDbgPatchIdentity.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D0A564 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(unsigned __int64 a1)
{
  __int64 v1; // rcx

  if ( qword_140E2D8C0 && (a1 & 0x10) == 0 )
    a1 &= qword_140E2D8C8;
  v1 = (a1 >> 12) & 0x3FFFFFFFFFFLL;
  if ( v1 )
    return qword_140E37D10 + 8 * v1 - 8;
  else
    return 0LL;
}
