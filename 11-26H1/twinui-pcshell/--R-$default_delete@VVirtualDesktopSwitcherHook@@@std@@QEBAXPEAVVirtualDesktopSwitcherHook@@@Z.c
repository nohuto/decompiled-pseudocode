/*
 * XREFs of ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x1806ACC18
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801C1220 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ??1?$unique_ptr@VVirtualDesktopSwitcherHook@@U?$default_delete@VVirtualDesktopSwitcherHook@@@std@@@std@@QEAA@XZ @ 0x1806AC150 (--1-$unique_ptr@VVirtualDesktopSwitcherHook@@U-$default_delete@VVirtualDesktopSwitcherHook@@@std.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AEF5C (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopSwitcherHook@@QEAA@XZ @ 0x1806AC194 (--1VirtualDesktopSwitcherHook@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<VirtualDesktopSwitcherHook>::operator()(__int64 a1, VirtualDesktopSwitcherHook *a2)
{
  if ( a2 )
  {
    VirtualDesktopSwitcherHook::~VirtualDesktopSwitcherHook(a2);
    operator delete(a2, (const struct std::nothrow_t *)1);
  }
}
