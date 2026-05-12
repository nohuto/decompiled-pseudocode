/*
 * XREFs of sub_14006672C @ 0x14006672C
 * Callers:
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14006672C(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
}
