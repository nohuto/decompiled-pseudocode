/*
 * XREFs of ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800AC45C
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180009F94 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 */

void __fastcall CDesktopManager::AbandonActiveAnimations(CDesktopManager *this)
{
  struct _SINGLE_LIST_ENTRY *i; // rbx

  for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
  {
    if ( !LOBYTE(i[7].Next) )
      CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
  }
}
