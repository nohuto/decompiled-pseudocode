/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x180114A98
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x18003ABD0 (RtlpDereferenceWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventNameSubRundown(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  _OWORD Fields[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(Fields, 0, 32);
  WORD3(Fields[0]) = 3364;
  Fields[2] = __PAIR128__(a2, a1);
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v2 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0x10u, Fields);
}
