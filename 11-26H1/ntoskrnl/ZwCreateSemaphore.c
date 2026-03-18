/*
 * XREFs of ZwCreateSemaphore @ 0x140724CD0
 * Callers:
 *     DifZwCreateSemaphoreWrapper @ 0x1406A1D40 (DifZwCreateSemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSemaphore(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
