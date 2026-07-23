/*
 * XREFs of WerpProcessId @ 0x18007FB30
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18007EAA0 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     WerpWaitForCrashReporting @ 0x18007FBD0 (WerpWaitForCrashReporting.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 */

__int64 __fastcall WerpProcessId(void *a1)
{
  NTSTATUS InformationProcess; // eax
  unsigned int v2; // ecx
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+58h] [rbp-10h]

  v5 = 0LL;
  v6 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  InformationProcess = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
