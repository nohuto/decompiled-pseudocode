/*
 * XREFs of ZwResetWriteWatch @ 0x14072B0E0
 * Callers:
 *     DifZwResetWriteWatchWrapper @ 0x1406BBB50 (DifZwResetWriteWatchWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
