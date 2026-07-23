/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x18009574C
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpCreateLowFragHeap @ 0x18006CC20 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009554C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800951F0 (RtlpEstimateAllocatedSize.c)
 *     GetUCBytes @ 0x180095804 (GetUCBytes.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpLogHeapExtendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  __int64 UCBytes; // rax
  _OWORD Fields[2]; // [rsp+20h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+74h] [rbp+23h]

  v14 = 0LL;
  memset(Fields, 0, sizeof(Fields));
  v13 = 0LL;
  v15 = 0;
  v9 = a1;
  v10 = a3;
  v11 = a2;
  v12 = a4;
  v16 = RtlpEstimateAllocatedSize(a1);
  UCBytes = GetUCBytes(a1, &v14, &v15);
  v13 = v14 - *(_QWORD *)(a1 + 664) - UCBytes;
  WORD3(Fields[0]) = 4133;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
