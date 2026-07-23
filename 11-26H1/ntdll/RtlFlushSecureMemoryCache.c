/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x180002600
 * Callers:
 *     RtlpDecommitBlock @ 0x180002230 (RtlpDecommitBlock.c)
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x18006D630 (RtlpCallSecureMemoryCallbacks.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+50h] [rbp-18h]

  MemoryInformation = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( RtlpSecMemListHead == &RtlpSecMemListHead )
    return 0;
  if ( !MemoryLength )
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           MemoryCache,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0
      || HIDWORD(MemoryInformation) == 0x10000 )
    {
      return 0;
    }
    MemoryLength = v5;
  }
  return RtlpCallSecureMemoryCallbacks(MemoryCache, MemoryLength);
}
