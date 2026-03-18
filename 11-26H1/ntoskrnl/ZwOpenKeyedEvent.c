/*
 * XREFs of ZwOpenKeyedEvent @ 0x1407259D0
 * Callers:
 *     DifZwOpenKeyedEventWrapper @ 0x1406AC4A0 (DifZwOpenKeyedEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenKeyedEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
