/*
 * XREFs of ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C7AA0
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD310 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

struct _LIST_ENTRY *CStoryboard::GetTaggedWindow()
{
  __int64 v0; // rbx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx

  v0 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             0LL);
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      if ( ((__int64)i[42].Blink & 0xFFF) == 8 )
        return i;
    }
  }
  return (struct _LIST_ENTRY *)v0;
}
