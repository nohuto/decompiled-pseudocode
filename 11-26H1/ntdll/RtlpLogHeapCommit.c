/*
 * XREFs of RtlpLogHeapCommit @ 0x1800956B0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18006DF50 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180089CA0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009554C (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpHeapAllocate @ 0x1800E6ECC (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]

  memset(Fields, 0, sizeof(Fields));
  v7 = a1;
  v8 = a2;
  v9 = a3;
  v10 = a4;
  WORD3(Fields[0]) = 4147;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v4 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x20402u, 0x1Cu, Fields);
}
