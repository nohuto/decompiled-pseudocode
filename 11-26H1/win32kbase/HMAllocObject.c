/*
 * XREFs of HMAllocObject @ 0x14011DE00
 * Callers:
 *     <none>
 * Callees:
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 */

__int64 __fastcall HMAllocObject(int a1, int a2, int a3, int a4)
{
  return HMAllocObjectEx(a1, a2, a3, a4, 0);
}
