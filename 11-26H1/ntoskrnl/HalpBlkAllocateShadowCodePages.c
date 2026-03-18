/*
 * XREFs of HalpBlkAllocateShadowCodePages @ 0x140CB2E90
 * Callers:
 *     HalpBlkAllocateShadowCode @ 0x140CB2E08 (HalpBlkAllocateShadowCode.c)
 * Callees:
 *     HalpBlkAllocateAndShadowMemory @ 0x140CB2C6C (HalpBlkAllocateAndShadowMemory.c)
 */

__int64 __fastcall HalpBlkAllocateShadowCodePages(__int64 a1, __int64 a2, __int64 *a3)
{
  return HalpBlkAllocateAndShadowMemory(
           (char *)(a1 & 0xFFFFFFFFFFFFF000uLL),
           ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12,
           (__int64)a3,
           32,
           a3) == 0LL
       ? 0xC0000017
       : 0;
}
