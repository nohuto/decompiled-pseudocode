/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180072298
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072098 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     GetUCBytes @ 0x180071DB4 (GetUCBytes.c)
 *     RtlpEstimateAllocatedSize @ 0x1800724E8 (RtlpEstimateAllocatedSize.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 UCBytes; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+74h] [rbp+23h]

  v14 = 0LL;
  memset(v8, 0, sizeof(v8));
  v13 = 0LL;
  v15 = 0;
  v9 = a1;
  v10 = a3;
  v11 = a2;
  v12 = a4;
  v16 = RtlpEstimateAllocatedSize(a1);
  UCBytes = GetUCBytes(a1, &v14, &v15);
  v13 = v14 - *(_QWORD *)(a1 + 664) - UCBytes;
  WORD3(v8[0]) = 4133;
  return NtTraceEvent(a5, 1027LL, 60LL, v8);
}
