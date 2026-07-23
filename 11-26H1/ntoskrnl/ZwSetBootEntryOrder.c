/*
 * XREFs of ZwSetBootEntryOrder @ 0x14072B2A0
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x1406BC600 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x1409A29E4 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
