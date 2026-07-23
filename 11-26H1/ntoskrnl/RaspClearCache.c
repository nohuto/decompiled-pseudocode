/*
 * XREFs of RaspClearCache @ 0x140C5AE48
 * Callers:
 *     BgpTxtCacheDestroy @ 0x140C58AAC (BgpTxtCacheDestroy.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x140C5AEA4 (RaspDestroyCachedBitmap.c)
 */

_XSAVE_FORMAT *RaspClearCache()
{
  _XSAVE_FORMAT *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = gLoadedDiffHivesLock.StateSaveArea;
    if ( *(struct _KTHREAD **)&gLoadedDiffHivesLock.StateSaveArea->ErrorOffset != (struct _KTHREAD *)&gLoadedDiffHivesLock.StateSaveArea
      || (v1 = *(_QWORD *)gLoadedDiffHivesLock.StateSaveArea,
          *(_XSAVE_FORMAT **)(*(_QWORD *)gLoadedDiffHivesLock.StateSaveArea + 8LL) != gLoadedDiffHivesLock.StateSaveArea) )
    {
      __fastfail(3u);
    }
    gLoadedDiffHivesLock.StateSaveArea = *(_XSAVE_FORMAT **)gLoadedDiffHivesLock.StateSaveArea;
    *(_QWORD *)(v1 + 8) = &gLoadedDiffHivesLock.StateSaveArea;
    if ( result == (_XSAVE_FORMAT *)&gLoadedDiffHivesLock.StateSaveArea )
      break;
    RaspDestroyCachedBitmap(result);
  }
  HIDWORD(gLoadedDiffHivesLock.TrapFrame) = 0;
  return result;
}
