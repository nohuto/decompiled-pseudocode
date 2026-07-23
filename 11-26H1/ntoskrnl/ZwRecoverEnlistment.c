/*
 * XREFs of ZwRecoverEnlistment @ 0x14072AEE0
 * Callers:
 *     DifZwRecoverEnlistmentWrapper @ 0x1406BA000 (DifZwRecoverEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x140863FD4 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
