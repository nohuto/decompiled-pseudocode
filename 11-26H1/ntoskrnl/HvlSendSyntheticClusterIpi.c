/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x14024F9D0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpProxySyntheticClusterIpi @ 0x14024F8C8 (HvlpProxySyntheticClusterIpi.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140251218 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpAffinityToVirtualAffinity @ 0x140251240 (HvlpAffinityToVirtualAffinity.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403E6070 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1403E6974 (HvlpFastSendSyntheticClusterIpiEx.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, unsigned int a2)
{
  char v2; // dl
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r9

  if ( HvlEnlightenments < 0 && (HvlpFlags & 8) != 0 )
    return HvlpProxySyntheticClusterIpi(a1, a2);
  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, (unsigned int)HvlEnlightenments, a1, a2) )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 4 > 0xE || v2 >= 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(v3, v4);
    else
      return HvlpFastSendSyntheticClusterIpiEx(v3, v4);
  }
  else
  {
    v5 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(v3 + 8));
    return (unsigned __int16)HvcallInitiateHypercall(65547LL, v6, v5) != 0 ? 0xC0000001 : 0;
  }
}
