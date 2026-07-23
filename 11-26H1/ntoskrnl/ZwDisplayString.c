/*
 * XREFs of ZwDisplayString @ 0x140729C40
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x1406A8720 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
