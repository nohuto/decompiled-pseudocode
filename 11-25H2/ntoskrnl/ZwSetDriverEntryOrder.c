/*
 * XREFs of ZwSetDriverEntryOrder @ 0x14069E520
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x14063BD20 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
