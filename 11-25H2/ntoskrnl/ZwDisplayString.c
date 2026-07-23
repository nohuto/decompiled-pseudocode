/*
 * XREFs of ZwDisplayString @ 0x14069CDC0
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x140633260 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  _disable();
  __readeflags();
  return KiServiceInternal(String);
}
