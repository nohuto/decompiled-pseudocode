/*
 * XREFs of TppETWTimerSetNtTimer @ 0x1800884D4
 * Callers:
 *     TppTimerQueueExpiration @ 0x180088790 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall TppETWTimerSetNtTimer(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rcx
  _OWORD Fields[3]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v6 = a3;
  memset(Fields, 0, 32);
  WORD3(Fields[0]) = 7212;
  Fields[2] = __PAIR128__(a1, a2);
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 0x14u, Fields);
}
