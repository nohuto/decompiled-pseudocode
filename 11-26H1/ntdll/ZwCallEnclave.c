/*
 * XREFs of ZwCallEnclave @ 0x180160190
 * Callers:
 *     LdrpIssueEnclaveCall @ 0x180070CC0 (LdrpIssueEnclaveCall.c)
 *     RtlEnclaveCallDispatcher @ 0x180163090 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x180163100 (RtlCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallEnclave()
{
  __int64 result; // rax

  result = 147LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
