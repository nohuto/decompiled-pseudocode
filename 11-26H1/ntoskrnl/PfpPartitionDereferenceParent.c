/*
 * XREFs of PfpPartitionDereferenceParent @ 0x140381780
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1409C4504 (PfCheckDeprioritizeFile.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     PfpPartitionFindByHandle @ 0x140A53E50 (PfpPartitionFindByHandle.c)
 *     PfSnEndTrace @ 0x140AA3588 (PfSnEndTrace.c)
 *     PfTTraceListAdd @ 0x140AF5F5C (PfTTraceListAdd.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 * Callees:
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 */

__int64 __fastcall PfpPartitionDereferenceParent(__int64 a1)
{
  return PsDereferencePartition(a1, 1951426128LL);
}
