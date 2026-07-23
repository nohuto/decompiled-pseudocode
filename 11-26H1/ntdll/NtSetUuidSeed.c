/*
 * XREFs of NtSetUuidSeed @ 0x1801626B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetUuidSeed(PCHAR Seed)
{
  NTSTATUS result; // eax

  result = 452;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
