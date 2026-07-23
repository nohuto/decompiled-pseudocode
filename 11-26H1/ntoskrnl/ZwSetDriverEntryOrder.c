/*
 * XREFs of ZwSetDriverEntryOrder @ 0x14072B3C0
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x1406BCDA0 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
