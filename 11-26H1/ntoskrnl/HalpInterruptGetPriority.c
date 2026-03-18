/*
 * XREFs of HalpInterruptGetPriority @ 0x1404299E4
 * Callers:
 *     HalpInterruptSetLineState @ 0x1404294DC (HalpInterruptSetLineState.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057C19C (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpConnectThermalInterrupt @ 0x14058FBA0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x14058FDB4 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x14058FE70 (HalpInitializeDeferredErrorVector.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetPriority(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // ecx

  v2 = a2 >> 4;
  if ( v2 <= 2u )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 252);
  if ( 15 - (unsigned int)v2 > v3 )
    return 0LL;
  else
    return v2 + v3 - 15;
}
