/*
 * XREFs of _dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__ @ 0x1802325E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__()
{
  if ( qword_18089A328 )
    std::_Ref_count_base::_Decref(qword_18089A328);
}
