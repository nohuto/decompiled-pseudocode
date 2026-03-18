/*
 * XREFs of ZwCreateTransactionManager @ 0x14069CB40
 * Callers:
 *     DifZwCreateTransactionManagerWrapper @ 0x140632720 (DifZwCreateTransactionManagerWrapper.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(TmHandle, *(_QWORD *)&DesiredAccess);
}
