/*
 * XREFs of ZwReadOnlyEnlistment @ 0x1407262D0
 * Callers:
 *     DifZwReadOnlyEnlistmentWrapper @ 0x1406B5DA0 (DifZwReadOnlyEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
