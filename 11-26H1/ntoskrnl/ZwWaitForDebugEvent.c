/*
 * XREFs of ZwWaitForDebugEvent @ 0x140727090
 * Callers:
 *     DifZwWaitForDebugEventWrapper @ 0x1406BF180 (DifZwWaitForDebugEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForDebugEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
