/*
 * XREFs of RtlWow64ChangeThreadState @ 0x180138380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWow64ChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  SIZE_T v7; // r9

  if ( StateChangeType )
    return NtChangeThreadState(
             ThreadStateChangeHandle,
             ThreadHandle,
             StateChangeType,
             ExtendedInformation,
             ExtendedInformationLength,
             Reserved);
  v7 = (unsigned int)ExtendedInformationLength;
  LODWORD(ExtendedInformationLength) = Reserved;
  return RtlpWow64ChangeThreadStateSuspend(
           ThreadStateChangeHandle,
           ThreadHandle,
           ExtendedInformation,
           v7,
           ExtendedInformationLength);
}
