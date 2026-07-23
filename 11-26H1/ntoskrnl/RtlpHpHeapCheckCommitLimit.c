/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x140479020
 * Callers:
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14061FCFC (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int8 *p_WaitType)
{
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  v4 = *(_QWORD *)p_WaitType;
  if ( !*(_QWORD *)p_WaitType )
  {
    v4 = *(_QWORD *)&PspTlsContext.WaitBlockFill11[16];
    p_WaitType = &PspTlsContext.WaitBlock[0].WaitType;
    if ( !*(_QWORD *)&PspTlsContext.WaitBlockFill11[16] )
      return 1LL;
  }
  if ( a2 + a1 <= v4 )
    return 1LL;
  v6 = *((_QWORD *)p_WaitType + 1);
  if ( v6 )
    RtlpLogHeapFailure(21, a3, 0, v6, a1, a2);
  return 0LL;
}
