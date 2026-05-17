/*
 * XREFs of NtDuplicateToken @ 0x18015F780
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18004F280 (RtlpTpInitializeData.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     RtlImpersonateSelfEx @ 0x1800D2C20 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800E1D30 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x180115654 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
