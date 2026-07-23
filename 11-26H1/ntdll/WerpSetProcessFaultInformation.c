/*
 * XREFs of WerpSetProcessFaultInformation @ 0x180111320
 * Callers:
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall WerpSetProcessFaultInformation(void *a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return -1073741585;
  ProcessInformation = 1LL;
  return NtSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}
