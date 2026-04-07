/*
 * XREFs of ?UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z @ 0x180065154
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18001D120 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180056CBC (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 */

void __fastcall CTimelineBase::UpdateBeforeTickResultWorker(CTimelineBase *this, char a2)
{
  if ( !a2 )
    CTimelineBase::JumpToFinalValue(this);
  *((_BYTE *)this + 73) = 0;
}
