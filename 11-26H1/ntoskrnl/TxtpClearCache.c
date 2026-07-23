/*
 * XREFs of TxtpClearCache @ 0x140C58AD4
 * Callers:
 *     BgpTxtCacheDestroy @ 0x140C58AAC (BgpTxtCacheDestroy.c)
 * Callees:
 *     TxtpDestroyCacheEntry @ 0x140C58B30 (TxtpDestroyCacheEntry.c)
 */

_UNKNOWN **TxtpClearCache()
{
  _UNKNOWN **result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (_UNKNOWN **)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache
      || (v1 = *(_QWORD *)TxtpTextCache, *(_UNKNOWN **)(*(_QWORD *)TxtpTextCache + 8LL) != TxtpTextCache) )
    {
      __fastfail(3u);
    }
    TxtpTextCache = *(_UNKNOWN **)TxtpTextCache;
    *(_QWORD *)(v1 + 8) = &TxtpTextCache;
    if ( result == &TxtpTextCache )
      break;
    TxtpDestroyCacheEntry(result);
  }
  dword_140E0A240 = 0;
  return result;
}
