/*
 * XREFs of ZwReleaseSemaphore @ 0x140723530
 * Callers:
 *     DifZwReleaseSemaphoreWrapper @ 0x1406B6A30 (DifZwReleaseSemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReleaseSemaphore(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
