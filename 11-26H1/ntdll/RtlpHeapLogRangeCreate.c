/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x18006CFF4
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  _OWORD Fields[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  memset(Fields, 0, sizeof(Fields));
  v9 = 0;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  WORD3(Fields[0]) = 613;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v3 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0x18u, Fields);
}
