/*
 * XREFs of ZwCreateKey @ 0x18015F1E0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180044C38 (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800D200C (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800D20A8 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RXactpCommit @ 0x1800FCFB8 (RXactpCommit.c)
 *     LdrpCreateKey @ 0x180141D10 (LdrpCreateKey.c)
 *     RtlpNtCreateKey @ 0x18014EF70 (RtlpNtCreateKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  NTSTATUS result; // eax

  result = 29;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
