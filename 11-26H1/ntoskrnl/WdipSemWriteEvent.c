/*
 * XREFs of WdipSemWriteEvent @ 0x140ADB3D4
 * Callers:
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140821220 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x140821304 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x140821394 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1408213FC (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14082147C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemSqmAddToStream @ 0x140821AF0 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140821C38 (WdipSemSqmIncrementDword.c)
 *     WdipSemSqmInit @ 0x140821CD8 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140ADB0D8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  struct _LIST_ENTRY *Flink; // rdi

  Flink = stru_140F03F40.Timer.TimerListEntry.Flink;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled((REGHANDLE)stru_140F03F40.Timer.TimerListEntry.Flink, a2) )
    return EtwWrite((REGHANDLE)Flink, a2, a3, a4, UserData);
  return -1073741816;
}
