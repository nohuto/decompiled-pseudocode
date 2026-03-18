/*
 * XREFs of EngAcquireFastMutex @ 0x1401435B0
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireFastMutex @ 0x1401C1EE0 (GreAcquireFastMutex.c)
 */

void __stdcall EngAcquireFastMutex(HFASTMUTEX hfm)
{
  GreAcquireFastMutex(hfm);
}
