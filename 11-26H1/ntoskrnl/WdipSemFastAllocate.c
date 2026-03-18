/*
 * XREFs of WdipSemFastAllocate @ 0x140ADB300
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x14081F298 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14081F35C (WdipSemAddEndEventToScenario.c)
 *     WdipSemLoadNextScenario @ 0x14081FD4C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140820244 (WdipSemLoadScenarioTable.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140820AC4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x140820C10 (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemWriteSemActionsEvent @ 0x140ADB0D8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x140ADB28C (WdipSemBuildScenarioInstance.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140B60058 (WdipSemUpdateProviderTableWithEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140B2E264 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&(&stru_140E28440.Header.WaitListHead.Blink)[2 * a1]);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
