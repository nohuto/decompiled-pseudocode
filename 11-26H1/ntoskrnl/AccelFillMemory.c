/*
 * XREFs of AccelFillMemory @ 0x1402A19C4
 * Callers:
 *     MiFillPhysicalPages @ 0x140289560 (MiFillPhysicalPages.c)
 *     MiZeroWithUltraSpace @ 0x1402A0EE0 (MiZeroWithUltraSpace.c)
 *     MiZeroAndConvertPage @ 0x1402A14B0 (MiZeroAndConvertPage.c)
 *     MiFillMemory @ 0x1402A1930 (MiFillMemory.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiPerformTimedMemoryZeroing @ 0x14051ED50 (MiPerformTimedMemoryZeroing.c)
 * Callees:
 *     AccelpSubmitWork @ 0x1402A1EE4 (AccelpSubmitWork.c)
 *     AccelBuildDescriptorMemoryFill @ 0x1406DE99C (AccelBuildDescriptorMemoryFill.c)
 */

__int64 __fastcall AccelFillMemory(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelBuildDescriptorMemoryFill(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork(a1, a5);
  return result;
}
