/*
 * XREFs of ZwUmsThreadYield @ 0x140726F10
 * Callers:
 *     DifZwUmsThreadYieldWrapper @ 0x1406BDE20 (DifZwUmsThreadYieldWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUmsThreadYield(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
