/*
 * XREFs of ZwRenameKey @ 0x140726430
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1406B6F10 (DifZwRenameKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName);
}
