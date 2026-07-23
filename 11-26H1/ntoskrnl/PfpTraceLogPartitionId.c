/*
 * XREFs of PfpTraceLogPartitionId @ 0x140602E30
 * Callers:
 *     PfpPartitionCreate @ 0x140602B1C (PfpPartitionCreate.c)
 *     PfpTraceLogPfPartitionId @ 0x140602E4C (PfpTraceLogPfPartitionId.c)
 *     PfpPartitionFindOrCreate @ 0x1407CA138 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpTraceLogPartitionId(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 120) + 464LL);
  return result;
}
