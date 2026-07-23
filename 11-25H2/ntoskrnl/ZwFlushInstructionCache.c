/*
 * XREFs of ZwFlushInstructionCache @ 0x14069CF60
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1406340A0 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_1407F0D20 @ 0x1407F0D20 (sub_1407F0D20.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     sub_1409E1A4C @ 0x1409E1A4C (sub_1409E1A4C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
