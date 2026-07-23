/*
 * XREFs of ZwSaveMergedKeys @ 0x14069E3A0
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
