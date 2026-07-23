/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1405BFD30
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1405BDCCC (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x1407957D4 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
