/*
 * XREFs of ZwDisplayString @ 0x140725070
 * Callers:
 *     DifZwDisplayStringWrapper @ 0x1406A4B40 (DifZwDisplayStringWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(String, v1);
}
