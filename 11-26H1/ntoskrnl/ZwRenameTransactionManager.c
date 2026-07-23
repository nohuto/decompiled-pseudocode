/*
 * XREFs of ZwRenameTransactionManager @ 0x14072B020
 * Callers:
 *     DifZwRenameTransactionManagerWrapper @ 0x1406BAC60 (DifZwRenameTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LogFileName);
}
