/*
 * XREFs of ZwSetIRTimer @ 0x140726890
 * Callers:
 *     DifZwSetIRTimerWrapper @ 0x1406B97B0 (DifZwSetIRTimerWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetIRTimer(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
