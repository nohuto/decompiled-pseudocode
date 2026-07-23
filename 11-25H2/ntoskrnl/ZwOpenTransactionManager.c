/*
 * XREFs of ZwOpenTransactionManager @ 0x14069D8C0
 * Callers:
 *     DifZwOpenTransactionManagerWrapper @ 0x1406371C0 (DifZwOpenTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
