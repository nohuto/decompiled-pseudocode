/*
 * XREFs of MiInvalidPteConforms @ 0x1402F4430
 * Callers:
 *     MiTradePageMarkedBad @ 0x14028E820 (MiTradePageMarkedBad.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402F2FD0 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiValidWriteFaultProcess @ 0x1403A76E0 (MiValidWriteFaultProcess.c)
 *     MiTryLockLeafPage @ 0x14047F28C (MiTryLockLeafPage.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_140E2D740 || (qword_140E2D740 & a1) != 0);
}
