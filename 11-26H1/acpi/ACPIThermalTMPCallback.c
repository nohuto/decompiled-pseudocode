/*
 * XREFs of ACPIThermalTMPCallback @ 0x140029BA0
 * Callers:
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ACPIThermalLoop @ 0x140029C00 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x14002A484 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
