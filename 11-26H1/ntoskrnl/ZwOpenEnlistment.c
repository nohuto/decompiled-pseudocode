/*
 * XREFs of ZwOpenEnlistment @ 0x14072A4C0
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x1406AF0D0 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x140863FD4 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
