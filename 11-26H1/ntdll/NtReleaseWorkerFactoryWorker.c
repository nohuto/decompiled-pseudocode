/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x180161F10
 * Callers:
 *     TppPrepareDirectParams @ 0x1800406D0 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TpPostTask @ 0x180066A90 (TpPostTask.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseWorkerFactoryWorker()
{
  __int64 result; // rax

  result = 383LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
