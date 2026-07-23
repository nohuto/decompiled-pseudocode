/*
 * XREFs of PfpTraceLogPfPartitionId @ 0x140602E4C
 * Callers:
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PfDeletePartition @ 0x1407C9F70 (PfDeletePartition.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 * Callees:
 *     PfpTraceLogPartitionId @ 0x140602E30 (PfpTraceLogPartitionId.c)
 */

__int64 __fastcall PfpTraceLogPfPartitionId(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return PfpTraceLogPartitionId(*a1);
  return result;
}
