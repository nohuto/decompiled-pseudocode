/*
 * XREFs of ZwGetNlsSectionPtr @ 0x180160E70
 * Callers:
 *     RtlpGetNormalization @ 0x1800AD560 (RtlpGetNormalization.c)
 *     RtlpInitCodePageTables @ 0x1800DD038 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x1800DD2A0 (RtlpInitUppercaseTables.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  NTSTATUS result; // eax

  result = 258;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
