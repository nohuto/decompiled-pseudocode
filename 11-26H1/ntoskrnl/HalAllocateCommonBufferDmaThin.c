/*
 * XREFs of HalAllocateCommonBufferDmaThin @ 0x140349F20
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferDmaThinEx @ 0x14034A1A0 (HalAllocateCommonBufferDmaThinEx.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmaThin(int a1, int a2, int a3)
{
  return HalAllocateCommonBufferDmaThinEx(a1, 0, a2, a3, 1, 0x80000000);
}
