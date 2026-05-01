/*
 * XREFs of ??_EVirtualDesktopHotKeyWindow@@UEAAPEAXI@Z @ 0x180545D2C
 * Callers:
 *     ??_EVirtualDesktopHotKeyWindow@@WBA@EAAPEAXI@Z @ 0x180545CE0 (--_EVirtualDesktopHotKeyWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18015863C (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopHotKeyWindow *__fastcall VirtualDesktopHotKeyWindow::`vector deleting destructor'(
        VirtualDesktopHotKeyWindow *this,
        char a2)
{
  *(_QWORD *)this = &VirtualDesktopGestureWindow::`vftable'{for `CWRLImpWndProc<VirtualDesktopGestureWindow>'};
  *((_QWORD *)this + 2) = &VirtualDesktopHotKeyWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  VirtualDesktopGestureWindow::~VirtualDesktopGestureWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
