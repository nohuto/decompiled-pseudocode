/*
 * XREFs of HalpMapPhysicalMemory64 @ 0x14034478C
 * Callers:
 *     HalpCheckLowMemoryPreSleep @ 0x140BF2DA8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140C0FFAC (HalpCheckLowMemoryPostSleep.c)
 *     HalpAllocateScratchMemory @ 0x140C182E8 (HalpAllocateScratchMemory.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 */

__int64 __fastcall HalpMapPhysicalMemory64(int a1, int a2, char a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 1, a4, v5, 0LL);
}
