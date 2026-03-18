/*
 * XREFs of HalAllocateCommonBufferDmaThin @ 0x140347EA0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferDmaThinEx @ 0x140348120 (HalAllocateCommonBufferDmaThinEx.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmaThin(int a1, int a2, int a3)
{
  return HalAllocateCommonBufferDmaThinEx(a1, 0, a2, a3, 1, 0x80000000);
}
