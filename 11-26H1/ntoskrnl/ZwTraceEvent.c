/*
 * XREFs of ZwTraceEvent @ 0x140723FB0
 * Callers:
 *     DifZwTraceEventWrapper @ 0x1406BDB00 (DifZwTraceEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTraceEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
