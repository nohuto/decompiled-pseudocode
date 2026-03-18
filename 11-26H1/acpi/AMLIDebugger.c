/*
 * XREFs of AMLIDebugger @ 0x140055228
 * Callers:
 *     ParseScope @ 0x140005CE0 (ParseScope.c)
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     CatError @ 0x14006E870 (CatError.c)
 *     BreakPoint @ 0x140070AE0 (BreakPoint.c)
 *     Load @ 0x140070B90 (Load.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     Debugger @ 0x14006F69C (Debugger.c)
 */

ULONG AMLIDebugger()
{
  ULONG result; // eax

  result = gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
