/*
 * XREFs of ZwSetBootEntryOrder @ 0x1407266D0
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x1406B8A20 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x1409D1A04 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
