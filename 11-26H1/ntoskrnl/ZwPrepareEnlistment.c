/*
 * XREFs of ZwPrepareEnlistment @ 0x14072A800
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1406B2790 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
