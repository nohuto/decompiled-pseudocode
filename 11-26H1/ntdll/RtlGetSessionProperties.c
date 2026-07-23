/*
 * XREFs of RtlGetSessionProperties @ 0x18013CC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtQueryInformationJobObject @ 0x180161910 (NtQueryInformationJobObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlGetSessionProperties(ULONG SessionId, PULONG SharedUserSessionId)
{
  NTSTATUS v4; // ebx
  _BYTE *SharedData; // rcx
  _BYTE JobObjectInformation[624]; // [rsp+30h] [rbp-288h] BYREF

  memset_thunk_772440563353939046(JobObjectInformation, 0, 0x270uLL);
  if ( SessionId == -1 )
    return -1073741811;
  v4 = 0;
  if ( !SharedUserSessionId )
    return -1073741811;
  *SharedUserSessionId = 0;
  if ( RtlGetCurrentServiceSessionId() )
  {
    SharedData = NtCurrentPeb()->SharedData;
  }
  else
  {
    NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x270u, 0LL);
    SharedData = JobObjectInformation;
  }
  *SharedUserSessionId = *((_DWORD *)SharedData + 6) == SessionId;
  return v4;
}
