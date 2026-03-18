/*
 * XREFs of ZwCreateIoCompletion @ 0x140724A30
 * Callers:
 *     DifZwCreateIoCompletionWrapper @ 0x14069F410 (DifZwCreateIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateIoCompletion(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
