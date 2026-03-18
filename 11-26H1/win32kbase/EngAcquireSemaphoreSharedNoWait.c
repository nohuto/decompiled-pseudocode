/*
 * XREFs of EngAcquireSemaphoreSharedNoWait @ 0x140177B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GreAcquireSemaphoreSharedNoWaitInternal@@YAHPEAUHSEMAPHORE__@@@Z @ 0x140177B98 (-GreAcquireSemaphoreSharedNoWaitInternal@@YAHPEAUHSEMAPHORE__@@@Z.c)
 */

__int64 __fastcall EngAcquireSemaphoreSharedNoWait(HSEMAPHORE a1)
{
  return GreAcquireSemaphoreSharedNoWaitInternal(a1);
}
