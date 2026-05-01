/*
 * XREFs of _dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__ @ 0x180223E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__()
{
  if ( qword_1808DA9F8 )
    std::_Ref_count_base::_Decref(qword_1808DA9F8);
}
