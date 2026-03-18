/*
 * XREFs of WdipSemFastFree @ 0x140ADB450
 * Callers:
 *     WdipSemLoadNextScenario @ 0x14081FD4C (WdipSemLoadNextScenario.c)
 *     WdipSemRollBackProviderTable @ 0x140820854 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140820978 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemFreeScenario @ 0x140820E2C (WdipSemFreeScenario.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140AD9048 (WdipSemFreeFrequentScenarioTable.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140AD9E28 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140ADB0D8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&(&stru_140E28440.Header.WaitListHead.Blink)[2 * a1], a2);
  return result;
}
