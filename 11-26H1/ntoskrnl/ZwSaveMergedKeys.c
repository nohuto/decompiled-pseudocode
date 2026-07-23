/*
 * XREFs of ZwSaveMergedKeys @ 0x14072B240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
