/*
 * XREFs of ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x180685800
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801018C0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ??1?$unique_ptr@VVirtualDesktopSwitcherHook@@U?$default_delete@VVirtualDesktopSwitcherHook@@@std@@@std@@QEAA@XZ @ 0x180684D4C (--1-$unique_ptr@VVirtualDesktopSwitcherHook@@U-$default_delete@VVirtualDesktopSwitcherHook@@@std.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180687BE8 (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopSwitcherHook@@QEAA@XZ @ 0x180684D90 (--1VirtualDesktopSwitcherHook@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<VirtualDesktopSwitcherHook>::operator()(__int64 a1, VirtualDesktopSwitcherHook *a2)
{
  if ( a2 )
  {
    VirtualDesktopSwitcherHook::~VirtualDesktopSwitcherHook(a2);
    operator delete(a2, (const struct std::nothrow_t *)1);
  }
}
