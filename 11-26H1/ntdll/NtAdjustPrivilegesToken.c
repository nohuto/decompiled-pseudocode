/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18015F660
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1800C56D8 (RtlpSysVolTakeOwnership.c)
 *     RtlReleasePrivilege @ 0x1800D2590 (RtlReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1800D2720 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800DF5D0 (TppCritSetThread.c)
 *     RtlAdjustPrivilege @ 0x1800E32E0 (RtlAdjustPrivilege.c)
 *     RtlRemovePrivileges @ 0x180109300 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
