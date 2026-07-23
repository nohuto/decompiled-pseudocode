/*
 * XREFs of ZwCommitEnlistment @ 0x140729320
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x1406A1150 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
