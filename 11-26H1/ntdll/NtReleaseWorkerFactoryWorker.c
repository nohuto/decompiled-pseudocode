/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x180161E10
 * Callers:
 *     TppPrepareDirectParams @ 0x18002AC40 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x18002BCE0 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TpPostTask @ 0x180086EE0 (TpPostTask.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 383;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
