/*
 * XREFs of ZwVdmControl @ 0x180162A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwVdmControl(VDMSERVICECLASS Service, PVOID ServiceData)
{
  NTSTATUS result; // eax

  result = 483;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
