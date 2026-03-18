/*
 * XREFs of ZwOpenSession @ 0x140725AF0
 * Callers:
 *     DifZwOpenSessionWrapper @ 0x1406AD7A0 (DifZwOpenSessionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenSession(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
