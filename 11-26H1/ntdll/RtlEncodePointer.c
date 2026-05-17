/*
 * XREFs of RtlEncodePointer @ 0x18007E8D0
 * Callers:
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180102870 (RtlSetUnhandledExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
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
  return __ROR8__(a1 ^ v1, v1 & 0x3F);
}
