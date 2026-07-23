/*
 * XREFs of ZwCommitEnlistment @ 0x14069C4A0
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x140631130 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
