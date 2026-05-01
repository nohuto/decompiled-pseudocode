/*
 * XREFs of ??1?$unique_ptr@VVirtualDesktopSwitcherHook@@U?$default_delete@VVirtualDesktopSwitcherHook@@@std@@@std@@QEAA@XZ @ 0x1806AC150
 * Callers:
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x1806AC1F8 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AEF5C (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x1806ACC18 (--R-$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<VirtualDesktopSwitcherHook>::~unique_ptr<VirtualDesktopSwitcherHook>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<VirtualDesktopSwitcherHook>::operator()();
  return result;
}
