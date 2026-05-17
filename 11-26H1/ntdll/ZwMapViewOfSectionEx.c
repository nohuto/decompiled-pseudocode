/*
 * XREFs of ZwMapViewOfSectionEx @ 0x180161310
 * Callers:
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSectionEx()
{
  __int64 result; // rax

  result = 287LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
