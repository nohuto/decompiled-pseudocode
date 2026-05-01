/*
 * XREFs of _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__ @ 0x180212E00
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

int dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__()
{
  __int64 v0; // rax

  v0 = std::_Allocate<16,std::_Default_allocate_traits>(248LL);
  *(_QWORD *)v0 = v0;
  *(_QWORD *)(v0 + 8) = v0;
  *(_QWORD *)(v0 + 16) = v0;
  *(_WORD *)(v0 + 24) = 257;
  StartupAppMonitor::s_showNotificationMap = v0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMap__);
}
