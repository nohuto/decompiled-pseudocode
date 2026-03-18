/*
 * XREFs of ZwWaitForKeyedEvent @ 0x1407270B0
 * Callers:
 *     DifZwWaitForKeyedEventWrapper @ 0x1406BF310 (DifZwWaitForKeyedEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForKeyedEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
