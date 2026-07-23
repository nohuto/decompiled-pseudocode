/*
 * XREFs of NtQueryInformationAtom @ 0x180161890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 339;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
