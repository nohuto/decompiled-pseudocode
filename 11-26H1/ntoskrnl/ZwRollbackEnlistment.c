/*
 * XREFs of ZwRollbackEnlistment @ 0x14072B180
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x1406BC130 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
