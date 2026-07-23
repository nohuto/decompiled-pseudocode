/*
 * XREFs of ZwRenameKey @ 0x14072B000
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1406BAAF0 (DifZwRenameKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
