/*
 * XREFs of ZwRemoveIoCompletion @ 0x140723510
 * Callers:
 *     DifZwRemoveIoCompletionWrapper @ 0x1406B6D60 (DifZwRemoveIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRemoveIoCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
