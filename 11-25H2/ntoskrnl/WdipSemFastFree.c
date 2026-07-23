/*
 * XREFs of WdipSemFastFree @ 0x1406EDCC4
 * Callers:
 *     WdipSemLoadNextScenario @ 0x140792238 (WdipSemLoadNextScenario.c)
 *     WdipSemRollBackProviderTable @ 0x140792D40 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140792F90 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemFreeScenario @ 0x1407934B8 (WdipSemFreeScenario.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140A42E40 (WdipSemFreeFrequentScenarioTable.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A430C8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9EB6C (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&SListHead + a1, a2);
  return result;
}
