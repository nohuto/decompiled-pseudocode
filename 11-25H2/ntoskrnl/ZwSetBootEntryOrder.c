/*
 * XREFs of ZwSetBootEntryOrder @ 0x14069E400
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x14063BA40 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A258D0 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
