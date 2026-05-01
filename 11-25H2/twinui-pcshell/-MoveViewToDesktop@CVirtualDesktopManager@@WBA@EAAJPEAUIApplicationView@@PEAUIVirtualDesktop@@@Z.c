/*
 * XREFs of ?MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805302C0
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
  return CVirtualDesktopManager::MoveViewToDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
