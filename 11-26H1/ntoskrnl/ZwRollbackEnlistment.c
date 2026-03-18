/*
 * XREFs of ZwRollbackEnlistment @ 0x1407265B0
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x1406B8550 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
