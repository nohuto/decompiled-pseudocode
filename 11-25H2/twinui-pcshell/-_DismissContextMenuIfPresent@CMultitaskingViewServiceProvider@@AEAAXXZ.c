/*
 * XREFs of ?_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1801F0ED0
 * Callers:
 *     ?_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z @ 0x1801F7EC0 (-_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18053D064 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180543760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

void __fastcall CMultitaskingViewServiceProvider::_DismissContextMenuIfPresent(CMultitaskingViewServiceProvider *this)
{
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) )
  {
    if ( (pgui.flags & 4) != 0 )
      SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
  }
}
