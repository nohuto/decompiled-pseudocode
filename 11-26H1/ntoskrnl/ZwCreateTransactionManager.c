/*
 * XREFs of ZwCreateTransactionManager @ 0x1407299C0
 * Callers:
 *     DifZwCreateTransactionManagerWrapper @ 0x1406A6A00 (DifZwCreateTransactionManagerWrapper.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
