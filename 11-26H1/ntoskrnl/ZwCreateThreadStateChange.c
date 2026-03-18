/*
 * XREFs of ZwCreateThreadStateChange @ 0x140724D30
 * Callers:
 *     DifZwCreateThreadStateChangeWrapper @ 0x1406A2280 (DifZwCreateThreadStateChangeWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadStateChange(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
