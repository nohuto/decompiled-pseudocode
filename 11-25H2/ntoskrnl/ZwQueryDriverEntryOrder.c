/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x14069DB20
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x1406389B0 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
