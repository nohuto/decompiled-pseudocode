/*
 * XREFs of ZwSetInformationJobObject @ 0x180162470
 * Callers:
 *     TppJobpRundownJob @ 0x1800C9BD0 (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x1800FB800 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 426LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
