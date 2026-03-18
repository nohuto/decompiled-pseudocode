/*
 * XREFs of ZwDebugContinue @ 0x140724ED0
 * Callers:
 *     DifZwDebugContinueWrapper @ 0x1406A3AB0 (DifZwDebugContinueWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDebugContinue(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
