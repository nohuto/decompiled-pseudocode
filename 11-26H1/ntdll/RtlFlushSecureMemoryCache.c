/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x180017520
 * Callers:
 *     RtlpDecommitBlock @ 0x180017150 (RtlpDecommitBlock.c)
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpCallSecureMemoryCallbacks @ 0x18007F2F0 (RtlpCallSecureMemoryCallbacks.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+50h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
    return 0;
  if ( !a2 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, a1, 3LL, &v4, 48LL, 0LL) < 0 || HIDWORD(v4) == 0x10000 )
      return 0;
    a2 = v5;
  }
  return RtlpCallSecureMemoryCallbacks(a1, a2);
}
