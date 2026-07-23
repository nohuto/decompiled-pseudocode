/*
 * XREFs of PfpPartitionDereferenceParent @ 0x140383530
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 */

__int64 __fastcall PfpPartitionDereferenceParent(__int64 a1)
{
  return PsDereferencePartition(a1, 1951426128LL);
}
