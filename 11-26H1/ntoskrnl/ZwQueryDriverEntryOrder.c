/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x14072A9C0
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x1406B4290 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
