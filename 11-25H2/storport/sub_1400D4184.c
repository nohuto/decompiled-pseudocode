/*
 * XREFs of sub_1400D4184 @ 0x1400D4184
 * Callers:
 *     sub_140191D68 @ 0x140191D68 (sub_140191D68.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400D4184(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
}
