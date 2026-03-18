/*
 * XREFs of ZwSetIoCompletion @ 0x140726A70
 * Callers:
 *     DifZwSetIoCompletionWrapper @ 0x1406BB5E0 (DifZwSetIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetIoCompletion(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
