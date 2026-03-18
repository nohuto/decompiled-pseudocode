/*
 * XREFs of EngCreateFastMutex @ 0x1401C77C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1401C7DD0 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
