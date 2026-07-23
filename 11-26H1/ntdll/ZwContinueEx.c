/*
 * XREFs of ZwContinueEx @ 0x1801602D0
 * Callers:
 *     RtlContinueLongJump @ 0x1800D7F90 (RtlContinueLongJump.c)
 *     KiUserApcDispatcher @ 0x180162D50 (KiUserApcDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  NTSTATUS result; // eax

  result = 165;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
