/*
 * XREFs of ZwCommitComplete @ 0x140729300
 * Callers:
 *     DifZwCommitCompleteWrapper @ 0x1406A0FE0 (DifZwCommitCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
