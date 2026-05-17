/*
 * XREFs of ZwReleaseSemaphore @ 0x18015F080
 * Callers:
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x1800CC6B0 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x18010B330 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
