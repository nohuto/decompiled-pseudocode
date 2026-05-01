/*
 * XREFs of ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805601C0
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x180262DFC (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18055E190 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x18055F48C (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopGestureWindow::GetScaleFactor(VirtualDesktopGestureWindow *this)
{
  HWND ShellWindow; // rax

  ShellWindow = GetShellWindow();
  return (unsigned int)GetDpiForWindow(ShellWindow) / 0x60;
}
