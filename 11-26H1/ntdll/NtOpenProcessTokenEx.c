/*
 * XREFs of NtOpenProcessTokenEx @ 0x18015F540
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C7F18 (RtlpSysVolTakeOwnership.c)
 *     RtlAcquirePrivilege @ 0x1800D2850 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800D2C20 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800E1D30 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C5FC (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x180115654 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessTokenEx()
{
  __int64 result; // rax

  result = 48LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
