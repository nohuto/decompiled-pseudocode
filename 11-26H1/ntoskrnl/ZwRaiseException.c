/*
 * XREFs of ZwRaiseException @ 0x14072AE60
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x140537610 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     DifZwRaiseExceptionWrapper @ 0x1406B9460 (DifZwRaiseExceptionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
