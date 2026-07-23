/*
 * XREFs of BgpTxtCacheDestroy @ 0x140C58AAC
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C57380 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140C57F4C (BgpTxtDestroyRegion.c)
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140C5932C (AnFwpDisableProgressTimer.c)
 * Callees:
 *     TxtpClearCache @ 0x140C58AD4 (TxtpClearCache.c)
 *     RaspClearCache @ 0x140C5AE48 (RaspClearCache.c)
 */

__int64 BgpTxtCacheDestroy()
{
  __int64 result; // rax

  result = TxtpClearCache();
  if ( LOBYTE(gLoadedDiffHivesLock.CurrentRunTime) )
    return RaspClearCache();
  return result;
}
