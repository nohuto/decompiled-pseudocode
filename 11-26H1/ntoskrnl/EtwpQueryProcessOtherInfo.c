/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14096DF08
 * Callers:
 *     EtwTraceAppStateChange @ 0x1409540B8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140954D20 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpBuildProcessEvent @ 0x14096D8A8 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1404BCEA0 (PsGetProcessSectionBaseAddress.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 */

unsigned __int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbx

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (unsigned __int64)RtlImageNtHeader(result);
    v4 = result;
    if ( result )
    {
      *(_DWORD *)a2 = RtlReadULongFromUser((unsigned int *)(result + 88));
      result = RtlReadULongFromUser((unsigned int *)(v4 + 8));
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
