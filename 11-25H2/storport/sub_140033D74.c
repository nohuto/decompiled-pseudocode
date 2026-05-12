/*
 * XREFs of sub_140033D74 @ 0x140033D74
 * Callers:
 *     sub_14000A824 @ 0x14000A824 (sub_14000A824.c)
 *     sub_1400329EC @ 0x1400329EC (sub_1400329EC.c)
 *     sub_140032E5C @ 0x140032E5C (sub_140032E5C.c)
 *     sub_140033A28 @ 0x140033A28 (sub_140033A28.c)
 *     sub_140033C18 @ 0x140033C18 (sub_140033C18.c)
 *     sub_140042038 @ 0x140042038 (sub_140042038.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 *     sub_140065220 @ 0x140065220 (sub_140065220.c)
 *     sub_140066200 @ 0x140066200 (sub_140066200.c)
 *     sub_14006AE00 @ 0x14006AE00 (sub_14006AE00.c)
 *     sub_140075DA4 @ 0x140075DA4 (sub_140075DA4.c)
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 *     sub_1400A9E40 @ 0x1400A9E40 (sub_1400A9E40.c)
 *     sub_1400AFDF4 @ 0x1400AFDF4 (sub_1400AFDF4.c)
 *     sub_1401AEE2C @ 0x1401AEE2C (sub_1401AEE2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140033D74(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336)) == 0 ? 0xC0000056 : 0;
}
