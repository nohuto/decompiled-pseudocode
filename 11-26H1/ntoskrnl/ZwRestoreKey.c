/*
 * XREFs of ZwRestoreKey @ 0x140726530
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1406B80F0 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
