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

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
