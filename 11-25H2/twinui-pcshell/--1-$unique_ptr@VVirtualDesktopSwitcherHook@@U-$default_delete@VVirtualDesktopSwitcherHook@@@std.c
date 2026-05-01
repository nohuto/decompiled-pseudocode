/*
 * XREFs of ??1?$unique_ptr@VVirtualDesktopSwitcherHook@@U?$default_delete@VVirtualDesktopSwitcherHook@@@std@@@std@@QEAA@XZ @ 0x180684D4C
 * Callers:
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180684DF4 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180687BE8 (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x180685800 (--R-$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<VirtualDesktopSwitcherHook>::~unique_ptr<VirtualDesktopSwitcherHook>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<VirtualDesktopSwitcherHook>::operator()();
  return result;
}
