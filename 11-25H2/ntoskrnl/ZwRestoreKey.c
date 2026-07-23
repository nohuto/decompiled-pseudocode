/*
 * XREFs of ZwRestoreKey @ 0x14069E260
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x14063B750 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
