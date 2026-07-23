/*
 * XREFs of NtCreateIoRing @ 0x180160490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateIoRing(
        PHANDLE IoRingHandle,
        ULONG CreateParametersLength,
        PVOID CreateParameters,
        ULONG OutputParametersLength,
        PVOID OutputParameters)
{
  NTSTATUS result; // eax

  result = 179;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
