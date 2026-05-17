/*
 * XREFs of ZwRaiseException @ 0x180161DD0
 * Callers:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010BC94 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlRaiseNoncontinuableException @ 0x180127570 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D5C0 (LdrpLogFatalUserCallbackException.c)
 *     KiUserExceptionDispatcher @ 0x180162FC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException()
{
  __int64 result; // rax

  result = 373LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
