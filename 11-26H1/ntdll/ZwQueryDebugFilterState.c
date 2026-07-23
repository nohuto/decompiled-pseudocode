/*
 * XREFs of ZwQueryDebugFilterState @ 0x1801617D0
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DB6B4 (vDbgPrintExWithPrefixInternalHelper.c)
 *     DbgQueryDebugFilterState @ 0x18013B8F0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  NTSTATUS result; // eax

  result = 333;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
