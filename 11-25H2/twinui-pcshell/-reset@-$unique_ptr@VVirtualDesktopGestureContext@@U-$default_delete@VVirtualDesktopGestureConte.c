/*
 * XREFs of ?reset@?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAAXPEAVVirtualDesktopGestureContext@@@Z @ 0x180158794
 * Callers:
 *     ??1VirtualDesktopGestureHandler@@UEAA@XZ @ 0x18015872C (--1VirtualDesktopGestureHandler@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAA@XZ @ 0x1802BD908 (--1-$unique_ptr@VVirtualDesktopGestureContext@@U-$default_delete@VVirtualDesktopGestureContext@@.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x180539E70 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18053D064 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x180538D70 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 */

void __fastcall wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::reset(
        VirtualDesktopGestureContext **a1,
        VirtualDesktopGestureContext *a2)
{
  VirtualDesktopGestureContext *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v2);
    operator delete(v2, (const struct std::nothrow_t *)0xC0);
  }
}
