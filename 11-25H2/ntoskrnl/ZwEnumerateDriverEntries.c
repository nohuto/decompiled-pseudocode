/*
 * XREFs of ZwEnumerateDriverEntries @ 0x14069CE40
 * Callers:
 *     DifZwEnumerateDriverEntriesWrapper @ 0x1406338B0 (DifZwEnumerateDriverEntriesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
