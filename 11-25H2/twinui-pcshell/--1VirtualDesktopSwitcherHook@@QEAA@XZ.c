/*
 * XREFs of ??1VirtualDesktopSwitcherHook@@QEAA@XZ @ 0x180684D90
 * Callers:
 *     ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x180685800 (--R-$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall VirtualDesktopSwitcherHook::~VirtualDesktopSwitcherHook(VirtualDesktopSwitcherHook *this)
{
  std::_Ref_count_base *v1; // rcx

  if ( VirtualDesktopSwitcherHook::s_vdsHookData )
  {
    v1 = qword_18089A328;
    VirtualDesktopSwitcherHook::s_vdsHookData = 0LL;
    qword_18089A328 = 0LL;
    if ( v1 )
      std::_Ref_count_base::_Decref(v1);
  }
}
