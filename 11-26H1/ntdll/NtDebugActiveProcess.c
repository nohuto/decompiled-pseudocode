/*
 * XREFs of NtDebugActiveProcess @ 0x1801608F0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x180138FE0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 214;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
