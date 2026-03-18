/*
 * XREFs of WdipSemFastAllocate @ 0x140A44214
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x140791790 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x140791854 (WdipSemAddEndEventToScenario.c)
 *     WdipSemLoadNextScenario @ 0x140792238 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140792E50 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1407931D4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14079330C (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140A441A0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9EB6C (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140A84164 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
