/*
 * XREFs of NtSetDefaultLocale @ 0x1801621F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  NTSTATUS result; // eax

  result = 414;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
