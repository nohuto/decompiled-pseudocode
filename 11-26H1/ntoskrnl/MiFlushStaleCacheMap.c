/*
 * XREFs of MiFlushStaleCacheMap @ 0x1406F8C5C
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x1406F8760 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiFlushCachedIoPfnRange @ 0x140526AFC (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFlushStaleCacheMap(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r8
  int v4; // r9d
  unsigned int i; // edi
  _BYTE v7[48]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v8[128]; // [rsp+50h] [rbp-98h] BYREF

  memset_0(v7, 0, 0xB0uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = v8;
  v4 = 0;
  for ( i = 0; i < 0x200; ++i )
  {
    if ( ((*(_DWORD *)(a1
                     + 4
                     * ((unsigned __int64)(2
                                         * (((unsigned int)v2 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878
                                                                                      - 12))
                                                               - 1))
                                          - *(_DWORD *)(a1 + 24))) >> 5)
                     + 44) >> (2 * ((v2 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *(_BYTE *)(a1 + 24)))) & 3) == 1 )
    {
      *v3 = v2;
      ++v4;
      ++v3;
      if ( v4 == 16 )
      {
        if ( (unsigned int)MiFlushCachedIoPfnRange((__int64)v7, 16, 3) )
          return 1LL;
        v4 = 0;
        v3 = v8;
      }
    }
    ++v2;
  }
  if ( v4 )
    return MiFlushCachedIoPfnRange((__int64)v7, v4, 3);
  else
    return 0LL;
}
