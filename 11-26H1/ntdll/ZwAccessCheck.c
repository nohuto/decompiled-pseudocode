/*
 * XREFs of ZwAccessCheck @ 0x18015EF40
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  __int64 result; // rax

  result = 0LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
