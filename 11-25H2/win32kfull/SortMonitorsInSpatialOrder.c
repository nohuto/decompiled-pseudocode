/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x14014A9F0
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x140149BCC (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x14014AAD8 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void __fastcall SortMonitorsInSpatialOrder(__int64 a1, __int64 a2)
{
  if ( ***(_DWORD ***)(W32GetUserSessionState(a1, a2) + 56968) )
    UpdateDesktopMonitorNavigationOrder();
}
