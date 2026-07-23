/*
 * XREFs of NtTerminateEnclave @ 0x180162870
 * Callers:
 *     LdrInitializeEnclave @ 0x180090FD0 (LdrInitializeEnclave.c)
 *     LdrpDeleteEnclave @ 0x180139424 (LdrpDeleteEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 466;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
