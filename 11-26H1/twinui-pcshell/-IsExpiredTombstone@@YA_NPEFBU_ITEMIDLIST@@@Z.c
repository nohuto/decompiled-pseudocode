/*
 * XREFs of ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180693C48
 * Callers:
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x1801DD4E4 (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z @ 0x180692B80 (-ILWriteCallback@CPinList@@CAHPEAVPINENTRY@@PEAUILWRITEINFO@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180692618 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 */

bool __fastcall IsExpiredTombstone(const struct _ITEMIDLIST *a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-20h] BYREF

  v2 = 0LL;
  if ( (int)GetTimestampFromPidl(a1, -1091633108, &v2) < 0 )
    return 0;
  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  return v2 + 6048000000000LL < *(unsigned __int64 *)&SystemTimeAsFileTime;
}
