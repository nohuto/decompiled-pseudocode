/*
 * XREFs of ZwFlushInstructionCache @ 0x140725210
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1406A66B0 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_1408807A8 @ 0x1408807A8 (sub_1408807A8.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_1409F05F8 @ 0x1409F05F8 (sub_1409F05F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
