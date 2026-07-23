/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x140ACC4B4
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140ACC2CC (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PfResourceExclusiveAcquire @ 0x1404D07E8 (PfResourceExclusiveAcquire.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1409D2508 (PfSnPrefetchCacheEntryGet.c)
 */

void __fastcall PfSnPrefetchCacheEntryUpdate(__int64 a1)
{
  _OWORD *v1; // rdi
  unsigned __int8 *v3; // r8
  __int64 v4; // rbp
  __int64 v5; // r9
  __int64 v6; // rax
  struct _LIST_ENTRY *v7; // rbx

  v1 = (_OWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 4);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  PfResourceExclusiveAcquire((struct _ERESOURCE *)&stru_140E67200.Teb);
  v7 = stru_140E67200.WaitListEntry.Blink - 1;
  if ( !memcmp(&stru_140E67200.WaitListEntry.Blink[1], v1, 0x40uLL)
    || (v7 = (struct _LIST_ENTRY *)PfSnPrefetchCacheEntryGet((__int64)&stru_140E67200.WaitStatus, v1, v4, 0LL)) != 0LL )
  {
    HIDWORD(v7[7].Flink) = *(_DWORD *)(a1 + 68);
  }
  ExReleaseResourceLite((PERESOURCE)&stru_140E67200.Teb);
  KeLeaveCriticalRegion();
}
