/*
 * XREFs of ZwRaiseException @ 0x180161CD0
 * Callers:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B7E4 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlRaiseNoncontinuableException @ 0x1801272E0 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D480 (LdrpLogFatalUserCallbackException.c)
 *     KiUserExceptionDispatcher @ 0x180162EC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 373;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
