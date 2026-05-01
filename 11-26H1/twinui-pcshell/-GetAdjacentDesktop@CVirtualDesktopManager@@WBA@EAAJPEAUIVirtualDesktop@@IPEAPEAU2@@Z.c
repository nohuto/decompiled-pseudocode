/*
 * XREFs of ?GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180552EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktop(
        __int64 a1,
        struct IVirtualDesktop *a2,
        unsigned int a3,
        struct IVirtualDesktop **a4)
{
  return CVirtualDesktopManager::GetAdjacentDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3, a4);
}
