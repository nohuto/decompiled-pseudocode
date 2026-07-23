/*
 * XREFs of NtChangeThreadState @ 0x180160150
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpEnvThreadSuspend @ 0x18010BF40 (RtlpHpEnvThreadSuspend.c)
 *     RtlWow64ChangeThreadState @ 0x180138380 (RtlWow64ChangeThreadState.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138678 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS result; // eax

  result = 153;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
