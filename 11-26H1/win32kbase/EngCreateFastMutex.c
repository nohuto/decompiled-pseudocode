/*
 * XREFs of EngCreateFastMutex @ 0x1401F3600
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1401F3B70 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
