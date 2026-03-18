/*
 * XREFs of ZwRecoverEnlistment @ 0x140726310
 * Callers:
 *     DifZwRecoverEnlistmentWrapper @ 0x1406B6420 (DifZwRecoverEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x14085DCE4 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey);
}
