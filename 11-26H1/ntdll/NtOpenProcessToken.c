/*
 * XREFs of NtOpenProcessToken @ 0x1801614B0
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x180045300 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180047D40 (RtlpGetDefaultsSubjectContext.c)
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 *     RtlAdjustPrivilege @ 0x1800E32E0 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 308;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
