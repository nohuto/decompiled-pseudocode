/*
 * XREFs of PfpTraceLogPartitionId @ 0x140600380
 * Callers:
 *     PfpPartitionCreate @ 0x14060006C (PfpPartitionCreate.c)
 *     PfpTraceLogPfPartitionId @ 0x14060039C (PfpTraceLogPfPartitionId.c)
 *     PfpPartitionFindOrCreate @ 0x1407C70D8 (PfpPartitionFindOrCreate.c)
 *     PfpPartitionFindByHandle @ 0x140A53E50 (PfpPartitionFindByHandle.c)
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
