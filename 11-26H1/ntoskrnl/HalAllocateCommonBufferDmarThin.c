/*
 * XREFs of HalAllocateCommonBufferDmarThin @ 0x1404F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferDmarThinEx @ 0x1404F1DF0 (HalAllocateCommonBufferDmarThinEx.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmarThin(int a1, int a2, int a3)
{
  return HalAllocateCommonBufferDmarThinEx(a1, 0, a2, a3, 1, 0x80000000);
}
