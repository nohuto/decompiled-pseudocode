/*
 * XREFs of ZwSetThreadExecutionState @ 0x14072B7C0
 * Callers:
 *     DifZwSetThreadExecutionStateWrapper @ 0x1406BFC80 (DifZwSetThreadExecutionStateWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&NewFlags);
}
