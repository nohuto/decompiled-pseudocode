/*
 * XREFs of AccelFillMemory @ 0x1402A0F14
 * Callers:
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiZeroWithUltraSpace @ 0x1402A0430 (MiZeroWithUltraSpace.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiFillMemory @ 0x1402A0E80 (MiFillMemory.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiPerformTimedMemoryZeroing @ 0x1405213F4 (MiPerformTimedMemoryZeroing.c)
 * Callees:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 *     AccelBuildDescriptorMemoryFill @ 0x1406E2C3C (AccelBuildDescriptorMemoryFill.c)
 */

__int64 __fastcall AccelFillMemory(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelBuildDescriptorMemoryFill(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork(a1, a5);
  return result;
}
