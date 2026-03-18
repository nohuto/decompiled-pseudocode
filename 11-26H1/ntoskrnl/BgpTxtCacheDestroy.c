/*
 * XREFs of BgpTxtCacheDestroy @ 0x140C52AAC
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140C51F4C (BgpTxtDestroyRegion.c)
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140C5332C (AnFwpDisableProgressTimer.c)
 * Callees:
 *     TxtpClearCache @ 0x140C52AD4 (TxtpClearCache.c)
 *     RaspClearCache @ 0x140C54E48 (RaspClearCache.c)
 */

__int64 BgpTxtCacheDestroy()
{
  __int64 result; // rax

  result = TxtpClearCache();
  if ( gLoadedDiffHivesLock.ApcStateFill[0] )
    return RaspClearCache();
  return result;
}
