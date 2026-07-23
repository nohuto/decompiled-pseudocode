/*
 * XREFs of ZwRestoreKey @ 0x14072B100
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x1406BBCD0 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
