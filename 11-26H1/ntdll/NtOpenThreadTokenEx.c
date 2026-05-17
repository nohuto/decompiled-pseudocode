/*
 * XREFs of NtOpenThreadTokenEx @ 0x18015F520
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlpOpenThreadToken @ 0x1800D2BB0 (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x180115654 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
