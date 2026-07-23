/*
 * XREFs of FsRtlpBreakRHOplocksForNonCachedIo @ 0x140B717F0
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlOplockKeysEqual @ 0x1403F7C40 (FsRtlOplockKeysEqual.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpBreakRHOplocksForNonCachedIo(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  __int64 v4; // rsi
  __int64 *i; // rbx
  LARGE_INTEGER *j; // rbx
  LARGE_INTEGER *v11; // rbp

  v4 = a1 + 72;
  for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( (i[6] & 0x8000000) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), i[3], a3) )
    {
      if ( (a3 & 0x10010000) != 0 )
        return 3221227785LL;
      *((_DWORD *)i + 12) = i[6] & 0xFF0FFFFF | 0x800000;
      if ( (a3 & 0x10) == 0 )
        *a4 = 1;
    }
  }
  for ( j = *(LARGE_INTEGER **)(a1 + 56); j != (LARGE_INTEGER *)(a1 + 56); j = (LARGE_INTEGER *)j->QuadPart )
  {
    v11 = j;
    if ( (j[6].LowPart & 0x8000000) != 0
      && !FsRtlOplockKeysEqual(*(PFILE_OBJECT *)(a2 + 48), (PFILE_OBJECT)j[3].QuadPart) )
    {
      if ( (a3 & 0x10010000) != 0 )
        return 3221227785LL;
      j = (LARGE_INTEGER *)j[1].QuadPart;
      if ( FsRtlpRemoveAndCompleteRHIrp(j->QuadPart, a1, 0, 0, 9, 0, 0, 0) )
      {
        if ( (a3 & 0x10) == 0 )
        {
          *a4 = 1;
          FsRtlpOplockTryStartBreakAckTimeout(v11 + 9, v11[11].QuadPart);
        }
      }
      else
      {
        a4[1] = 1;
      }
    }
  }
  return 0LL;
}
