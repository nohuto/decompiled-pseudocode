/*
 * XREFs of CcFreePrivateCacheMapIgnoreNull @ 0x14039CBEC
 * Callers:
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CcFreePrivateCacheMapIgnoreNull(PVOID Entry)
{
  if ( Entry )
    ExFreeToLookasideListEx(&CcPrivateCacheMapLookasideList, Entry);
}
