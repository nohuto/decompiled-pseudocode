/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x180162B30
 * Callers:
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 * Callees:
 *     <none>
 */

__int64 NtUnmapViewOfSectionEx()
{
  __int64 result; // rax

  result = 480LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
