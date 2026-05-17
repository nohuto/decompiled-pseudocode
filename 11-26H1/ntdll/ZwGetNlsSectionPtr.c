/*
 * XREFs of ZwGetNlsSectionPtr @ 0x180160F70
 * Callers:
 *     RtlpGetNormalization @ 0x1800AE430 (RtlpGetNormalization.c)
 *     RtlpInitCodePageTables @ 0x1800D52E0 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x1800D5550 (RtlpInitUppercaseTables.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 258LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
