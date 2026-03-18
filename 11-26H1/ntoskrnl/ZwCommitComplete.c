/*
 * XREFs of ZwCommitComplete @ 0x140724730
 * Callers:
 *     DifZwCommitCompleteWrapper @ 0x14069D400 (DifZwCommitCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
