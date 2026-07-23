/*
 * XREFs of NtRenameTransactionManager @ 0x140536D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return __imp_NtRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
