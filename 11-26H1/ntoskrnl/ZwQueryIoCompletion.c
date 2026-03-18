/*
 * XREFs of ZwQueryIoCompletion @ 0x140725FD0
 * Callers:
 *     DifZwQueryIoCompletionWrapper @ 0x1406B25C0 (DifZwQueryIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryIoCompletion(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
