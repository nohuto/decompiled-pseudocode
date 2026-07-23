/*
 * XREFs of WdipSemFastAllocate @ 0x140AD7DB0
 * Callers:
 *     WdipSemAddContextEventToScenario @ 0x1408254A8 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14082556C (WdipSemAddEndEventToScenario.c)
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x140826CD4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x140826E20 (WdipSemUpdateInflightScenarioTable.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AD7B88 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemBuildScenarioInstance @ 0x140AD7D3C (WdipSemBuildScenarioInstance.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x140B630F4 (WdipSemUpdateProviderTableWithEvent.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x140B301B0 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&(&stru_140E285C0.Header.WaitListHead.Blink)[2 * a1]);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
