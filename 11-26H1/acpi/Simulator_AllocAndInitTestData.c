/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x14005168C
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
 *     memset @ 0x140072740 (memset.c)
 */

void *Simulator_AllocAndInitTestData()
{
  void *Pool2; // rax
  void *v1; // rbx

  Pool2 = (void *)ExAllocatePool2(64LL, 80LL, 1145131841LL);
  v1 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, 0x50uLL);
  return v1;
}
