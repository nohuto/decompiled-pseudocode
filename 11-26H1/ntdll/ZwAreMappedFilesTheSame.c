/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x180160030
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800D7130 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BBAC (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  NTSTATUS result; // eax

  result = 144;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
