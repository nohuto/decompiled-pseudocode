/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x180071F48
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x18001B870 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _OWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]

  v5 = a1;
  v6 = a2;
  memset(v4, 0, sizeof(v4));
  WORD3(v4[0]) = 4150;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v2 = 2147353472LL;
  return NtTraceEvent(*(unsigned __int8 *)v2, 132098LL, 12LL, v4);
}
