/*
 * XREFs of SmpDedicatedMemoryCachingCallback @ 0x140010C70
 * Callers:
 *     <none>
 * Callees:
 *     SmpEnableCachingOnDedicatedMemoryWorker @ 0x140010D7C (SmpEnableCachingOnDedicatedMemoryWorker.c)
 */

__int64 SmpDedicatedMemoryCachingCallback()
{
  SmpEnableCachingOnDedicatedMemoryWorker();
  return 0LL;
}
