/*
 * XREFs of ??1?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAA@XZ @ 0x1802BD908
 * Callers:
 *     _VirtualDesktopGestureHandler::InitializeContext_::_1_::dtor$0 @ 0x1806CC0CA (_VirtualDesktopGestureHandler--InitializeContext_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::~unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>(
        VirtualDesktopGestureContext **a1)
{
  wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::reset(a1, 0LL);
}
