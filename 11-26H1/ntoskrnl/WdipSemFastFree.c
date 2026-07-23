/*
 * XREFs of WdipSemFastFree @ 0x140AD7F00
 * Callers:
 *     WdipSemLoadNextScenario @ 0x140825F5C (WdipSemLoadNextScenario.c)
 *     WdipSemRollBackProviderTable @ 0x140826A64 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140826B88 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemFreeScenario @ 0x14082703C (WdipSemFreeScenario.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140AD5AF8 (WdipSemFreeFrequentScenarioTable.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD68D8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AD7B88 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&(&stru_140E285C0.Header.WaitListHead.Blink)[2 * a1], a2);
  return result;
}
