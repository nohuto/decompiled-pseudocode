/*
 * XREFs of ZwContinue @ 0x140728820
 * Callers:
 *     RtlRestoreContext @ 0x140537140 (RtlRestoreContext.c)
 *     DifZwContinueWrapper @ 0x1406A1900 (DifZwContinueWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
