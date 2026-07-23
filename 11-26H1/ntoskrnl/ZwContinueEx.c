/*
 * XREFs of ZwContinueEx @ 0x140729460
 * Callers:
 *     DifZwContinueExWrapper @ 0x1406A1790 (DifZwContinueExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
