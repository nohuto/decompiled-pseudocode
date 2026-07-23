/*
 * XREFs of NtOpenThreadTokenEx @ 0x18015F420
 * Callers:
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     RtlpOpenThreadToken @ 0x1800D2A80 (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x180114E34 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 47;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
