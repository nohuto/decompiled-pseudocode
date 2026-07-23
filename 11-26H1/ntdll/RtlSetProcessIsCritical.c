/*
 * XREFs of RtlSetProcessIsCritical @ 0x180147770
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 */

NTSTATUS __cdecl RtlSetProcessIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  int v3; // edi
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  v3 = NewValue;
  ProcessInformation = 0;
  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( OldValue )
  {
    result = NtQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessBreakOnTermination,
               &ProcessInformation,
               4u,
               0LL);
    if ( result < 0 )
      return result;
    *OldValue = ProcessInformation;
  }
  ProcessInformation = v3;
  return NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
