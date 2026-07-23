/*
 * XREFs of ZwContinue @ 0x14069B9A0
 * Callers:
 *     RtlRestoreContext @ 0x1404FA420 (RtlRestoreContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
