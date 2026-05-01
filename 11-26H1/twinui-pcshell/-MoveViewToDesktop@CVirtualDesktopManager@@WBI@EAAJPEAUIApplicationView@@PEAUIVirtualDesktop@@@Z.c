/*
 * XREFs of ?MoveViewToDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805536A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktop(
        __int64 a1,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  return CVirtualDesktopManager::MoveViewToDesktop((CVirtualDesktopManager *)(a1 - 24), a2, a3);
}
