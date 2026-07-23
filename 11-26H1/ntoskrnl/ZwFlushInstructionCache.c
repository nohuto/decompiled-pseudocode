/*
 * XREFs of ZwFlushInstructionCache @ 0x140729DE0
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1406AA290 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140886BA8 @ 0x140886BA8 (sub_140886BA8.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409ECDC8 @ 0x1409ECDC8 (sub_1409ECDC8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
