/*
 * XREFs of ZwRollbackEnlistment @ 0x14069E2E0
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x14063B8D0 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
