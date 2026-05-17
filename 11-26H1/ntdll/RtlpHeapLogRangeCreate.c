/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x180113E50
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  memset(v5, 0, sizeof(v5));
  v9 = 0;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  WORD3(v5[0]) = 613;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v3 = 2147353480LL;
  return NtTraceEvent(*(unsigned __int8 *)v3, 132098LL, 24LL, v5);
}
