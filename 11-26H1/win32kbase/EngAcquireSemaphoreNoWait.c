/*
 * XREFs of EngAcquireSemaphoreNoWait @ 0x140168FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreAcquireSemaphoreNoWaitInternal@@YAHPEAUHSEMAPHORE__@@@Z @ 0x140169008 (-GreAcquireSemaphoreNoWaitInternal@@YAHPEAUHSEMAPHORE__@@@Z.c)
 */

BOOL __stdcall EngAcquireSemaphoreNoWait(HSEMAPHORE hsem)
{
  return GreAcquireSemaphoreNoWaitInternal(hsem);
}
