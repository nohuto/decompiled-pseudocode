/*
 * XREFs of MiUpdateZeroFreeBitmap @ 0x140288D50
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 * Callees:
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 */

unsigned __int64 __fastcall MiUpdateZeroFreeBitmap(__int64 a1, __int64 a2, int a3)
{
  unsigned int Cache; // eax
  unsigned __int64 v6; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // rcx

  Cache = MiColorGetCache(*(unsigned int *)(a2 + 24));
  v6 = (unsigned __int64)Cache >> 6;
  result = 1LL << (Cache & 0x3F);
  v9 = *(_QWORD *)(a1
                 + 16
                 * (((v8 >> 20) & 1)
                  + 2 * ((((unsigned int)v8 >> 18) & 3) + 3LL * (((unsigned int)v8 >> 15) & 1) + 32LL * (WORD1(v8) & 3)))
                 + 136);
  if ( a3 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v9 + 8 * v6), result);
  }
  else
  {
    result = ~result;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 8 * v6), result);
  }
  return result;
}
