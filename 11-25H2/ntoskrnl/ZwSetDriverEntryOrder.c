/*
 * XREFs of ZwSetDriverEntryOrder @ 0x14069E520
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x14063BD20 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetDriverEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
