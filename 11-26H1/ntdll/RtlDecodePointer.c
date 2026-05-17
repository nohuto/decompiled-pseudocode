/*
 * XREFs of RtlDecodePointer @ 0x18004D5D0
 * Callers:
 *     RtlpNotOwnerCriticalSection @ 0x18004A6E0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCallVectoredHandlers @ 0x18004CF90 (RtlpCallVectoredHandlers.c)
 *     RtlpPossibleDeadlock @ 0x18007BA50 (RtlpPossibleDeadlock.c)
 *     RtlUserThreadStart @ 0x180086920 (RtlUserThreadStart.c)
 *     TppExceptionFilter @ 0x18011F28C (TppExceptionFilter.c)
 *     LdrpFatalExceptionFilter @ 0x18015B6E0 (LdrpFatalExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D5C0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlDecodePointer(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)`RtlpGetCookieValue'::`2'::CookieValue;
  ProcessInformation = 0;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  return __ROR8__(a1, 64 - ((unsigned __int8)v1 & 0x3Fu)) ^ v1;
}
