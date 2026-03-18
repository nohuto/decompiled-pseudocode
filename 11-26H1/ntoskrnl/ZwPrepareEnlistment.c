/*
 * XREFs of ZwPrepareEnlistment @ 0x140725C30
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x1406AEBB0 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
