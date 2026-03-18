/*
 * XREFs of EngAcquireFastMutex @ 0x1400FF020
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireFastMutex @ 0x1401A0140 (GreAcquireFastMutex.c)
 */

void __stdcall EngAcquireFastMutex(HFASTMUTEX hfm)
{
  GreAcquireFastMutex(hfm);
}
