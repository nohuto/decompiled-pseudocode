/*
 * XREFs of ZwDeleteBootEntry @ 0x140729AE0
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x1406A7980 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x14089A1D8 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteBootEntry(ULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Id);
}
