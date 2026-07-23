/*
 * XREFs of NtOpenProcessTokenEx @ 0x18015F440
 * Callers:
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C56D8 (RtlpSysVolTakeOwnership.c)
 *     RtlAcquirePrivilege @ 0x1800D2720 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800D2AF0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800DF5D0 (TppCritSetThread.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C14C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x180114E34 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
