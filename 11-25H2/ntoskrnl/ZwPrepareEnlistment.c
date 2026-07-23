/*
 * XREFs of ZwPrepareEnlistment @ 0x14069D960
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1406379A0 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
