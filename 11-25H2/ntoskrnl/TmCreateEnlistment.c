/*
 * XREFs of TmCreateEnlistment @ 0x1404F9C30
 * Callers:
 *     CmTmCreateEnlistment @ 0x140A818D8 (CmTmCreateEnlistment.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCreateEnlistment(
        PHANDLE EnlistmentHandle,
        KPROCESSOR_MODE PreviousMode,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PRKRESOURCEMANAGER ResourceManager,
        PKTRANSACTION Transaction,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
{
  return __imp_TmCreateEnlistment(
           EnlistmentHandle,
           PreviousMode,
           DesiredAccess,
           ObjectAttributes,
           ResourceManager,
           Transaction,
           CreateOptions,
           NotificationMask,
           EnlistmentKey);
}
