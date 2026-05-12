/*
 * XREFs of sub_140039918 @ 0x140039918
 * Callers:
 *     sub_140039660 @ 0x140039660 (sub_140039660.c)
 * Callees:
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 */

void __fastcall sub_140039918(__int64 a1)
{
  __int64 v1; // rsi
  PEX_RUNDOWN_REF_CACHE_AWARE *v2; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  if ( sub_140021280(a1) )
  {
    PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 2LL);
    ExReleaseRundownProtectionCacheAware(*v2);
  }
  if ( *(_QWORD *)(v1 + 4960) )
    sub_140021110(v1, 0LL, 2LL);
  if ( sub_140021280(a1) )
    ExReleaseRundownProtectionCacheAware(*v2);
}
