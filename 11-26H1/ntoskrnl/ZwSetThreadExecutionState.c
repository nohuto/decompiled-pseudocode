/*
 * XREFs of ZwSetThreadExecutionState @ 0x140726BF0
 * Callers:
 *     DifZwSetThreadExecutionStateWrapper @ 0x1406BC0A0 (DifZwSetThreadExecutionStateWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetThreadExecutionState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
