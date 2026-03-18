/*
 * XREFs of ZwCreateIRTimer @ 0x140724A10
 * Callers:
 *     DifZwCreateIRTimerWrapper @ 0x14069F290 (DifZwCreateIRTimerWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateIRTimer(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
