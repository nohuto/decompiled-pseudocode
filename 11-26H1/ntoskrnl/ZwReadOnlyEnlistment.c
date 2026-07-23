/*
 * XREFs of ZwReadOnlyEnlistment @ 0x14072AEA0
 * Callers:
 *     DifZwReadOnlyEnlistmentWrapper @ 0x1406B9980 (DifZwReadOnlyEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
