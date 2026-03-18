/*
 * XREFs of PfpTraceLogPfPartitionId @ 0x14060039C
 * Callers:
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     PfDeletePartition @ 0x1407C6F10 (PfDeletePartition.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 * Callees:
 *     PfpTraceLogPartitionId @ 0x140600380 (PfpTraceLogPartitionId.c)
 */

__int64 __fastcall PfpTraceLogPfPartitionId(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return PfpTraceLogPartitionId(*a1);
  return result;
}
