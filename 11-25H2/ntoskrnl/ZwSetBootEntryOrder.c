/*
 * XREFs of ZwSetBootEntryOrder @ 0x14069E400
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x14063BA40 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x140A258D0 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
