/*
 * XREFs of ZwPrePrepareEnlistment @ 0x14069D920
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1406376C0 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
