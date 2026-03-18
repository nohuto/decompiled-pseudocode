/*
 * XREFs of ZwCommitEnlistment @ 0x140724750
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x14069D570 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
