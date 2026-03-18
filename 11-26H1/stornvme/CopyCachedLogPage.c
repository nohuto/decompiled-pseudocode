/*
 * XREFs of CopyCachedLogPage @ 0x140019D60
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 * Callees:
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall CopyCachedLogPage(__int64 a1, const void *a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 )
  {
    memmove((void *)(*(unsigned int *)(a1 + 24) + a1 + 8), a2, a3);
    result = 0LL;
    *(_BYTE *)(a4 + 3) = 1;
  }
  else
  {
    *(_BYTE *)(a4 + 3) = 6;
    return 3238002694LL;
  }
  return result;
}
