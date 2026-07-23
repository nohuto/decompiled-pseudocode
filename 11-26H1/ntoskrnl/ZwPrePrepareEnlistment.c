/*
 * XREFs of ZwPrePrepareEnlistment @ 0x14072A7C0
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x1406B24B0 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
