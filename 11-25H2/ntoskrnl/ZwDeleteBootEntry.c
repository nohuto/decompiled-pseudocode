/*
 * XREFs of ZwDeleteBootEntry @ 0x14069CC60
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x140632AC0 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x140805624 (BiDeleteBootEntry.c)
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
