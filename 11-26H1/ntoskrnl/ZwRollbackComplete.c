/*
 * XREFs of ZwRollbackComplete @ 0x14072B160
 * Callers:
 *     DifZwRollbackCompleteWrapper @ 0x1406BBFC0 (DifZwRollbackCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
