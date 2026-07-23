/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x14039E94C
 * Callers:
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList, Entry);
}
