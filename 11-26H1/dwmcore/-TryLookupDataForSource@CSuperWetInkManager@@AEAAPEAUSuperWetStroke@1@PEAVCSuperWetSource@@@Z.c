/*
 * XREFs of ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x180126738
 * Callers:
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180125CD8 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126260 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180126448 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA72C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x18021CE8C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x18021DEF0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CSuperWetInkManager::SuperWetStroke *__fastcall CSuperWetInkManager::TryLookupDataForSource(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::SuperWetStroke *result; // rax

  for ( result = (struct CSuperWetInkManager::SuperWetStroke *)*((_QWORD *)this + 4);
        result != *((struct CSuperWetInkManager::SuperWetStroke **)this + 5);
        result = (struct CSuperWetInkManager::SuperWetStroke *)((char *)result + 104) )
  {
    if ( *(struct CSuperWetSource **)result == a2 )
      return result;
  }
  return 0LL;
}
