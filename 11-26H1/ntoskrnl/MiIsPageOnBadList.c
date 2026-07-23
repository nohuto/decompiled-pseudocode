/*
 * XREFs of MiIsPageOnBadList @ 0x14028EF30
 * Callers:
 *     MiTradePageMarkedBad @ 0x14028DD80 (MiTradePageMarkedBad.c)
 *     MiFindContiguousPagesNode @ 0x14028FA50 (MiFindContiguousPagesNode.c)
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 *     MiConfirmCombinePageContents @ 0x1402EA8E0 (MiConfirmCombinePageContents.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 *     MiMakePageBad @ 0x1404B42D8 (MiMakePageBad.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MmTryIdentifyPage @ 0x1406F4028 (MmTryIdentifyPage.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MiRemoveBadPages @ 0x1406F6410 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406F6C4C (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 0x70000) == 0x50000 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
