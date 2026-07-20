/*
 * XREFs of SmpGetProcessId @ 0x140007F50
 * Callers:
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpGetProcessMuSessionId @ 0x140007D90 (SmpGetProcessMuSessionId.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessId(void *a1)
{
  _OWORD ProcessInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+50h] [rbp-18h]
  int v4; // [rsp+58h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
    return v3;
  else
    return 0LL;
}
