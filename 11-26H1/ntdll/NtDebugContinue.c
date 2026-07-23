/*
 * XREFs of NtDebugContinue @ 0x180160910
 * Callers:
 *     DbgUiContinue @ 0x18010D570 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  NTSTATUS result; // eax

  result = 215;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
