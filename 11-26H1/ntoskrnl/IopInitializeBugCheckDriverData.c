/*
 * XREFs of IopInitializeBugCheckDriverData @ 0x140793560
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN IopInitializeBugCheckDriverData()
{
  IopBugCheckDriverDataCallbackRecord.State = 0;
  return KeRegisterBugCheckReasonCallback(
           &IopBugCheckDriverDataCallbackRecord,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckDriverDataCallback,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"IoBugCheckDriverData");
}
