/*
 * XREFs of ZwOpenIoCompletion @ 0x140725930
 * Callers:
 *     DifZwOpenIoCompletionWrapper @ 0x1406ABB50 (DifZwOpenIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenIoCompletion(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
