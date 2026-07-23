/*
 * XREFs of ZwSetEventEx @ 0x14072B400
 * Callers:
 *     DifZwSetEventExWrapper @ 0x1406BD0A0 (DifZwSetEventExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetEventEx(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
