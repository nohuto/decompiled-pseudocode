/*
 * XREFs of sub_1400CA35C @ 0x1400CA35C
 * Callers:
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 *     sub_140075DA4 @ 0x140075DA4 (sub_140075DA4.c)
 *     sub_1400A9E40 @ 0x1400A9E40 (sub_1400A9E40.c)
 *     sub_1400AFD68 @ 0x1400AFD68 (sub_1400AFD68.c)
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 *     sub_1400D30D4 @ 0x1400D30D4 (sub_1400D30D4.c)
 *     sub_1400D8BF0 @ 0x1400D8BF0 (sub_1400D8BF0.c)
 *     sub_1400DA840 @ 0x1400DA840 (sub_1400DA840.c)
 *     sub_140111914 @ 0x140111914 (sub_140111914.c)
 *     sub_1401282DC @ 0x1401282DC (sub_1401282DC.c)
 *     sub_140128DA8 @ 0x140128DA8 (sub_140128DA8.c)
 *     sub_140129E18 @ 0x140129E18 (sub_140129E18.c)
 *     sub_14012ADEC @ 0x14012ADEC (sub_14012ADEC.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 *     sub_1401AEE2C @ 0x1401AEE2C (sub_1401AEE2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400CA35C(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152)) == 0 ? 0xC0000056 : 0;
}
