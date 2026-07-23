/*
 * XREFs of ZwPrivilegeCheck @ 0x180161690
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x180045300 (RtlpValidOwnerSubjectContext.c)
 *     RtlpValidLabelSubjectContext @ 0x1800457FC (RtlpValidLabelSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x180112710 (RtlNewSecurityGrantedAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  NTSTATUS result; // eax

  result = 323;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
