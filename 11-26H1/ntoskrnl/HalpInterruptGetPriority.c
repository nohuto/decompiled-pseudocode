/*
 * XREFs of HalpInterruptGetPriority @ 0x140436214
 * Callers:
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057E6CC (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpConnectThermalInterrupt @ 0x140592320 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140592534 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x1405925F0 (HalpInitializeDeferredErrorVector.c)
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
