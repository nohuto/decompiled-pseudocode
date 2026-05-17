/*
 * XREFs of NtAdjustPrivilegesToken @ 0x18015F760
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1800C7F18 (RtlpSysVolTakeOwnership.c)
 *     RtlReleasePrivilege @ 0x1800D26C0 (RtlReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x1800D2850 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800E1D30 (TppCritSetThread.c)
 *     RtlAdjustPrivilege @ 0x1800E5430 (RtlAdjustPrivilege.c)
 *     RtlRemovePrivileges @ 0x180109960 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
