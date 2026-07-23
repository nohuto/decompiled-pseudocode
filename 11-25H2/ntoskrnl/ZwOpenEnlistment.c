/*
 * XREFs of ZwOpenEnlistment @ 0x14069D620
 * Callers:
 *     DifZwOpenEnlistmentWrapper @ 0x140635580 (DifZwOpenEnlistmentWrapper.c)
 *     CmpRecoverEnlistment @ 0x1407D096C (CmpRecoverEnlistment.c)
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
