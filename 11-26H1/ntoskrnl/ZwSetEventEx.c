/*
 * XREFs of ZwSetEventEx @ 0x140726830
 * Callers:
 *     DifZwSetEventExWrapper @ 0x1406B94C0 (DifZwSetEventExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetEventEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
