/*
 * XREFs of _dynamic_atexit_destructor_for__g_streamMonitorManager__ @ 0x18016CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_streamMonitorManager__()
{
  if ( qword_1801D7A60 )
    std::_Ref_count_base::_Decref(qword_1801D7A60);
}
