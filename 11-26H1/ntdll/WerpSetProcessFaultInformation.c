/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1801117A0
 * Callers:
 *     RtlReportExceptionHelper @ 0x180088060 (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225711LL;
  v2 = 1LL;
  return NtSetInformationProcess(a1, 63LL, &v2, 8LL);
}
