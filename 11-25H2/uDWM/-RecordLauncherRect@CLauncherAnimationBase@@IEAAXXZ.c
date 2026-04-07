/*
 * XREFs of ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x18007DC64
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800C83B0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800C8430 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

void __fastcall CLauncherAnimationBase::RecordLauncherRect(struct _LIST_ENTRY *this)
{
  __int64 v2; // rax
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx

  if ( (unsigned int)GetDesktopID(1LL) )
  {
    v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
    if ( !*(_QWORD *)(v2 + 96) || *(_QWORD *)(v2 + 96) == -1LL )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               0LL);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        if ( ((__int64)i[42].Blink & 0xFFF) == 9 )
          this[8] = i[3];
      }
    }
  }
}
