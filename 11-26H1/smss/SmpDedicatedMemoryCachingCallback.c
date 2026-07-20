/*
 * XREFs of SmpDedicatedMemoryCachingCallback @ 0x1400108A0
 * Callers:
 *     <none>
 * Callees:
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x1400109AC (SmpEnableCachingOnDedicatedMemoryWorker.c)
 */

__int64 SmpDedicatedMemoryCachingCallback()
{
  SmpEnableCachingOnDedicatedMemoryWorker();
  return 0LL;
}
