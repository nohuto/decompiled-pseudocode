/*
 * XREFs of RtlWow64ChangeProcessState @ 0x180138310
 * Callers:
 *     <none>
 * Callees:
 *     NtChangeProcessState @ 0x180160130 (NtChangeProcessState.c)
 */

NTSTATUS __fastcall RtlWow64ChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE a3,
        void *a4,
        SIZE_T a5,
        ULONG64 a6)
{
  SIZE_T ExtendedInformationLength; // [rsp+20h] [rbp-18h]
  ULONG64 Reserved; // [rsp+28h] [rbp-10h]

  if ( a3 )
  {
    LODWORD(Reserved) = a6;
    LODWORD(ExtendedInformationLength) = a5;
    return NtChangeProcessState(ProcessStateChangeHandle, ProcessHandle, a3, a4, ExtendedInformationLength, Reserved);
  }
  else if ( (_DWORD)a5 )
  {
    return -1073741820;
  }
  else if ( a4 || (_DWORD)a6 )
  {
    return -1073741811;
  }
  else
  {
    return RtlpWow64SuspendProcess(ProcessHandle, ProcessStateChangeHandle);
  }
}
