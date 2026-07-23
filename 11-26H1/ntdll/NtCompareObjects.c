/*
 * XREFs of NtCompareObjects @ 0x180160210
 * Callers:
 *     RtlIsCurrentProcess @ 0x1800D5910 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x1801020F0 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  NTSTATUS result; // eax

  result = 159;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
