/*
 * XREFs of ZwSetIoCompletionEx @ 0x140726A90
 * Callers:
 *     DifZwSetIoCompletionExWrapper @ 0x1406BB430 (DifZwSetIoCompletionExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetIoCompletionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
