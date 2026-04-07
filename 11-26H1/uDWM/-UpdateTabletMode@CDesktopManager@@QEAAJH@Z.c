/*
 * XREFs of ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x18002C860
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18002C6DC (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x18002C960 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::UpdateTabletMode(CDesktopManager *this, int a2)
{
  *((_BYTE *)this + 516) = a2 != 0;
  CWindowList::UpdateShellWindowFrameColorization(*((CWindowList **)this + 53));
  return 0LL;
}
