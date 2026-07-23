/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1407CA468
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140CD4358 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 40));
}
