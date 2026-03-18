/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1405BD4C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1405BB45C (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x140792CA4 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
