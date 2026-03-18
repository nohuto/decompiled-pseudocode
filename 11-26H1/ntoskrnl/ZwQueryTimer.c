/*
 * XREFs of ZwQueryTimer @ 0x140723AF0
 * Callers:
 *     DifZwQueryTimerWrapper @ 0x1406B4B00 (DifZwQueryTimerWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryTimer(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
