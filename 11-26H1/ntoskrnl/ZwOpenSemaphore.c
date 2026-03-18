/*
 * XREFs of ZwOpenSemaphore @ 0x140725AD0
 * Callers:
 *     DifZwOpenSemaphoreWrapper @ 0x1406AD620 (DifZwOpenSemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenSemaphore(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
