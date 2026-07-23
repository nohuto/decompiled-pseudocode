/*
 * XREFs of ZwEnumerateDriverEntries @ 0x140729CC0
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1406A8EE0 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
