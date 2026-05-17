/*
 * XREFs of RtlpLogHeapCommit @ 0x1800721FC
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlpHpSegPageRangeCommit @ 0x180069850 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072098 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpInitializeHeapSegment @ 0x18007BEF8 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18008AB18 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x18008D814 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rcx
  _OWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]

  memset(v6, 0, sizeof(v6));
  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  WORD3(v6[0]) = 4147;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v4 = 2147353480LL;
  return NtTraceEvent(*(unsigned __int8 *)v4, 132098LL, 28LL, v6);
}
