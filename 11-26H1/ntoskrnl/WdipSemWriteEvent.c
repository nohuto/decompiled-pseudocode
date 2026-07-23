/*
 * XREFs of WdipSemWriteEvent @ 0x140AD7E84
 * Callers:
 *     WdipSemWriteInflightLimitExceededEvent @ 0x140827430 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x140827514 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408275A4 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14082760C (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14082768C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemSqmAddToStream @ 0x140827D00 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140827E48 (WdipSemSqmIncrementDword.c)
 *     WdipSemSqmInit @ 0x140827EE8 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AD7B88 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  struct _LIST_ENTRY *Flink; // rdi

  Flink = stru_140F06A28.Header.WaitListHead.Flink;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled((REGHANDLE)stru_140F06A28.Header.WaitListHead.Flink, a2) )
    return EtwWrite((REGHANDLE)Flink, a2, a3, a4, UserData);
  return -1073741816;
}
