/*
 * XREFs of ZwPrePrepareEnlistment @ 0x140725BF0
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1406AE8D0 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
