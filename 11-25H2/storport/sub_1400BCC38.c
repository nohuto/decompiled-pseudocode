/*
 * XREFs of sub_1400BCC38 @ 0x1400BCC38
 * Callers:
 *     sub_1400BD5E0 @ 0x1400BD5E0 (sub_1400BD5E0.c)
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400D74A8 @ 0x1400D74A8 (sub_1400D74A8.c)
 *     sub_14012FCD0 @ 0x14012FCD0 (sub_14012FCD0.c)
 *     sub_140189ED8 @ 0x140189ED8 (sub_140189ED8.c)
 *     sub_14018E1A8 @ 0x14018E1A8 (sub_14018E1A8.c)
 *     sub_14018F9FC @ 0x14018F9FC (sub_14018F9FC.c)
 *     sub_14018FF50 @ 0x14018FF50 (sub_14018FF50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400BCC38(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 552)) == 0 ? 0xC0000056 : 0;
}
