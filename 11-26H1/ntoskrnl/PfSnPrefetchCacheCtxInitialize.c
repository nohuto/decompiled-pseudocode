/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1407C7408
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140CCE1F8 (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 40));
}
