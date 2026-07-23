/*
 * XREFs of ZwRenameKey @ 0x14069E160
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x14063B170 (DifZwRenameKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
