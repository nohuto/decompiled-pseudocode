/*
 * XREFs of RtlDecodePointer @ 0x180037B50
 * Callers:
 *     RtlpNotOwnerCriticalSection @ 0x180034C60 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     RtlpPossibleDeadlock @ 0x18006A270 (RtlpPossibleDeadlock.c)
 *     RtlUserThreadStart @ 0x18007DCC0 (RtlUserThreadStart.c)
 *     TppExceptionFilter @ 0x18011F03C (TppExceptionFilter.c)
 *     LdrpFatalExceptionFilter @ 0x18015B5A0 (LdrpFatalExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D480 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  __int64 v1; // rax
  int v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  ProcessInformation = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return (PVOID)(__ROR8__(Ptr, 64 - ((unsigned __int8)v1 & 0x3Fu)) ^ v1);
}
