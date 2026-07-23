/*
 * XREFs of NtDuplicateToken @ 0x18015F680
 * Callers:
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x180039800 (RtlpTpInitializeData.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     RtlImpersonateSelfEx @ 0x1800D2AF0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800DF5D0 (TppCritSetThread.c)
 *     RtlpIsAppContainer @ 0x180114E34 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE Type,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 66;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
