/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x180113B10
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpHpSegSegmentAllocate @ 0x18006DF50 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = a3;
  v6 = a1;
  memset(Fields, 0, sizeof(Fields));
  v7 = a2;
  WORD3(Fields[0]) = 614;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v3 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0x18u, Fields);
}
