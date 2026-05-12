/*
 * XREFs of sub_1400D8AD8 @ 0x1400D8AD8
 * Callers:
 *     sub_1400CDA00 @ 0x1400CDA00 (sub_1400CDA00.c)
 *     sub_1400CDB80 @ 0x1400CDB80 (sub_1400CDB80.c)
 *     sub_1400E4240 @ 0x1400E4240 (sub_1400E4240.c)
 *     sub_14018A49C @ 0x14018A49C (sub_14018A49C.c)
 *     sub_140190BB4 @ 0x140190BB4 (sub_140190BB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400D8AD8(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 40)) == 0 ? 0xC0000056 : 0;
}
