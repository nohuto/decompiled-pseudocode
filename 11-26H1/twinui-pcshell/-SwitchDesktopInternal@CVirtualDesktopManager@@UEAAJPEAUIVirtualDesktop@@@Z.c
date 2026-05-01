/*
 * XREFs of ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::SwitchDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  return CVirtualDesktopManager::SwitchDesktopInternalPrivate((char *)this - 8, a2, 0LL);
}
