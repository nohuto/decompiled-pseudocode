/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x180161B30
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800BFB80 (RtlQueryPackageClaims.c)
 *     RtlQueryTokenHostIdAsUlong64 @ 0x1800FFEC0 (RtlQueryTokenHostIdAsUlong64.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 360;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
