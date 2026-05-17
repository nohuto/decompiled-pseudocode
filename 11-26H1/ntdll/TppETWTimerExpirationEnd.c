/*
 * XREFs of TppETWTimerExpirationEnd @ 0x180068B14
 * Callers:
 *     TppTimerQueueExpiration @ 0x180068340 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall TppETWTimerExpirationEnd(__int64 a1)
{
  __int64 v1; // rcx
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  v4 = a1;
  memset(v3, 0, sizeof(v3));
  WORD3(v3[0]) = 7215;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v1 = 2147353478LL;
  return NtTraceEvent(*(unsigned __int8 *)v1, 1026LL, 8LL, v3);
}
