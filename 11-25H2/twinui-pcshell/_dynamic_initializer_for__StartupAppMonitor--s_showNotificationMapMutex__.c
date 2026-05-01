/*
 * XREFs of _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMapMutex__ @ 0x1802286D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__StartupAppMonitor::s_showNotificationMapMutex__()
{
  _Mtx_init_in_situ((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex, 2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMapMutex__);
}
