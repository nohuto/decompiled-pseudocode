/*
 * XREFs of ZwQuerySemaphore @ 0x140726150
 * Callers:
 *     DifZwQuerySemaphoreWrapper @ 0x1406B3E60 (DifZwQuerySemaphoreWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySemaphore(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
