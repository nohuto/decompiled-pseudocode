/*
 * XREFs of MiIsPageOnBadList @ 0x14028F9D0
 * Callers:
 *     MiTradePageMarkedBad @ 0x14028E820 (MiTradePageMarkedBad.c)
 *     MiFindContiguousPagesNode @ 0x1402904F0 (MiFindContiguousPagesNode.c)
 *     MiPfnsWorthTrying @ 0x140290D20 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x140291970 (MiTradePage.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiTradePageMarkedTransition @ 0x1402FD5C0 (MiTradePageMarkedTransition.c)
 *     MiConfirmCombinePageContents @ 0x140308860 (MiConfirmCombinePageContents.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MiCopyHeaderIfResident @ 0x1404B51A4 (MiCopyHeaderIfResident.c)
 *     MiMakePageBad @ 0x1404BAA50 (MiMakePageBad.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E9984 (MiQueryPteAddResidentAttributes.c)
 *     MiArePageContentsZero @ 0x140520384 (MiArePageContentsZero.c)
 *     MiGetListOfPendingBadPages @ 0x14052AB58 (MiGetListOfPendingBadPages.c)
 *     MmTryIdentifyPage @ 0x1406EF388 (MmTryIdentifyPage.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MiRemoveBadPages @ 0x1406F17A0 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406F1FDC (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x1406F2340 (MmGetPageBadStatus.c)
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 0x70000) == 0x50000 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
