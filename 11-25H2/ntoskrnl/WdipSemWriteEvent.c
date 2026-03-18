/*
 * XREFs of WdipSemWriteEvent @ 0x140A7FF24
 * Callers:
 *     WdipSemUpdateProviderTableWithEvent @ 0x140792E50 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14079388C (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x140793974 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140793A04 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x140793A8C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemSqmAddToStream @ 0x1407940EC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140794250 (WdipSemSqmIncrementDword.c)
 *     WdipSemSqmInit @ 0x1407942F0 (WdipSemSqmInit.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9EB6C (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
