/*
 * XREFs of ZwPrivilegeCheck @ 0x180161790
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x18005AD80 (RtlpValidOwnerSubjectContext.c)
 *     RtlpValidLabelSubjectContext @ 0x18005B27C (RtlpValidLabelSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x180112C60 (RtlNewSecurityGrantedAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 323LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
