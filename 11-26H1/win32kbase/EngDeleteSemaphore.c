/*
 * XREFs of EngDeleteSemaphore @ 0x1400C6C50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1400C6C70 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
