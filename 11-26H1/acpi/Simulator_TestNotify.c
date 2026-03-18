/*
 * XREFs of Simulator_TestNotify @ 0x14006CD54
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     Simulator_Pre_RegEventHandler @ 0x1400515E8 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006C9EC (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_RefreshTree @ 0x14006CC50 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400DC53C (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotify(PVOID Argument1)
{
  if ( !g_SimulatorCallbackObject )
    return 3221225473LL;
  ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
  return 0LL;
}
