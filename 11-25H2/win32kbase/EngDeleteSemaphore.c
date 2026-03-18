/*
 * XREFs of EngDeleteSemaphore @ 0x14006D7F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
