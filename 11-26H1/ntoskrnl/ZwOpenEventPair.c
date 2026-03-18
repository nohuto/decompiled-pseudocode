/*
 * XREFs of ZwOpenEventPair @ 0x140725910
 * Callers:
 *     DifZwOpenEventPairWrapper @ 0x1406AB6A0 (DifZwOpenEventPairWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenEventPair(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
