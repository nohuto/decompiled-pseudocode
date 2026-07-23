/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x1409D3984
 * Callers:
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1404B6680 (PsGetProcessSectionBaseAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 */

unsigned int *__fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax
  unsigned int *v4; // rbx

  *(_QWORD *)a2 = 0LL;
  result = (unsigned int *)PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (unsigned int *)RtlImageNtHeader(result);
    v4 = result;
    if ( result )
    {
      *(_DWORD *)a2 = RtlReadULongFromUser(result + 22);
      result = (unsigned int *)RtlReadULongFromUser(v4 + 2);
      *(_DWORD *)(a2 + 4) = (_DWORD)result;
    }
  }
  return result;
}
