/*
 * XREFs of sub_1400D1328 @ 0x1400D1328
 * Callers:
 *     sub_1400CA6FC @ 0x1400CA6FC (sub_1400CA6FC.c)
 *     sub_1400CBACC @ 0x1400CBACC (sub_1400CBACC.c)
 *     sub_1400CDA00 @ 0x1400CDA00 (sub_1400CDA00.c)
 *     sub_1400CDB80 @ 0x1400CDB80 (sub_1400CDB80.c)
 *     sub_1400D4538 @ 0x1400D4538 (sub_1400D4538.c)
 *     sub_1400E4240 @ 0x1400E4240 (sub_1400E4240.c)
 *     sub_14018EBA4 @ 0x14018EBA4 (sub_14018EBA4.c)
 *     sub_14018F080 @ 0x14018F080 (sub_14018F080.c)
 *     sub_140190BB4 @ 0x140190BB4 (sub_140190BB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400D1328(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 56)) == 0 ? 0xC0000056 : 0;
}
